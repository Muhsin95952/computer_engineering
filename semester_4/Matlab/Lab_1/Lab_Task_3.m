DE_1 = input('Enter your Differential eqauation GPA: ');
DE_2 = input('Enter DE cradit hours: ');
DE  = DE_1 * DE_2;

CP_1 = input('Enter your Computer Programming GPA: ');
CP_2 = input('Enter Computer Programming cradit hour: ');
CP = CP_1 * CP_2;

CP_1_Lab = input('Enter your CP Lab GPA: ');
CP_2_Lab = input('Enter CP Lab cradit hour: ');
CP_Lab = CP_1_Lab * CP_2_Lab;

EDG_1 = input('Enter your EDG GPA: ');
EDG_2 = input('Enter EDG cradit hourss: ');
EDG = EDG_1 * EDG_2;

EDG_1_Lab = input('Enter your EDG LAb GPA: ');
EDG_2_Lab = input('Enter EDG LAb cradit hourss: ');
EDG_Lab = EDG_1_Lab * EDG_2_Lab;

CPS_1 = input('Enter your CPS GPA: ');
CPS_2 = input('Enter CPS cradit hours: ');
CPS = CPS_1 * CPS_2;

PAK_study1 = input('Enter your pak_study GPA: ');
PAK_study2 = input('Enter pak_study cradit hours: ');
PAK_study = PAK_study1 * PAK_study2;

CSI_1 = input('Enter your circuit and system 1 GPA: ');
CSI_2 = input('Entr cradit hour of CS_I: ');
CSI = CSI_1 * CSI_2;

CSI_1_Lab = input('Enter your circuit and system 1 Lab GPA: ');
CSI_2_Lab = input('Entr cradit hour of CS_I Lab: ');
CSI_Lab = CSI_1_Lab * CSI_2_Lab;

total_cradit_hour = DE_2 + CP_2 + CP_2_Lab +  EDG_2 + EDG_2_Lab + CPS_2 + CSI_2 + CSI_2_Lab + PAK_study2;
disp(['Total Cradit Hours are: ', num2str(total_cradit_hour)])
disp('         ')

total_CGP = DE + CP + CP_Lab +  EDG + EDG_Lab + CPS + CSI + CSI_Lab + PAK_study1;
disp(['Total CGP is: ', num2str(total_CGP)])
disp('    ')

CGPA = total_CGP / total_cradit_hour;
disp(['My CGPA in 2nd Semester is: ', num2str(CGPA)])
disp('  ')


disp('=============================================================================')
disp('             Subjects                               Grade points             ')
disp('=============================================================================')
disp('                                                                             ')
disp(['1). Differential Equation                          ', num2str(DE) ])
disp(['2). Communication & presentation skills            ', num2str(CPS)])
disp(['3). Pakistan Study                                 ', num2str(PAK_study)])
disp(['4). Computer programming                           ', num2str(CP)])
disp(['5). Computer programming Lab                       ', num2str(CP_Lab)])
disp(['6). Circuit and system I                           ', num2str(CSI)])
disp(['7). Circuit and system Lab                         ', num2str(CSI_Lab)])
disp(['8). Engineering Draw                               ', num2str(EDG)])
disp(['9). Engineering Drawing and CAD Lab                ', num2str(EDG)])
disp('                                                                             ')
disp('=============================================================================')
