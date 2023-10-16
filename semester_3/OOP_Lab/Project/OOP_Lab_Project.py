import torch
from PIL import Image
from torchvision.transforms.functional import to_tensor, to_pil_image
import cv2
from urllib.request import urlretrieve
from google.colab.patches import cv2_imshow

# save the image to our local storage
urlretrieve('https://pbs.twimg.com/profile_images/691700243809718272/z7XZUARB_400x400.jpg',
            '/content/demis.jpg')

# display the image in the notebook
cv2_imshow(cv2.imread('/content/demis.jpg'))


# save the image to our local storage
urlretrieve('https://pbs.twimg.com/profile_images/691700243809718272/z7XZUARB_400x400.jpg',
            '/content/demis.jpg')

# display the image in the notebook
cv2_imshow(cv2.imread('/content/demis.jpg'))


device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
model = torch.hub.load("bryandlee/animegan2-pytorch:main",
                       "generator", pretrained="face_paint_512_v2", device=device)
model.eval()


def to_animegan2(input_file):
    input_image = Image.open(input_file).convert('RGB')
    input_tensor = to_tensor(input_image).unsqueeze(0) * 2 - 1
    output = model(input_tensor.to(device)).cpu()[0]
    output = (output * 0.5 + 0.5).clip(0, 1)
    return to_pil_image(output)


pil_image = to_animegan2('/content/demis.jpg')
display(pil_image)

model = torch.hub.load("bryandlee/animegan2-pytorch:main",
                       "generator", pretrained="celeba_distill", device=device).eval()
display(to_animegan2('/content/demis.jpg'))

model = torch.hub.load("bryandlee/animegan2-pytorch:main",
                       "generator", pretrained="paprika", device=device).eval()
to_animegan2('/content/demis.jpg').save("/content/demis_paprika.jpg")
cv2_imshow(cv2.imread('/content/demis_paprika.jpg'))
