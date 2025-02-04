queueing_time = 289;
process_time = 154;
total_time = queueing_time + process_time;

disp(['Queueing Time: ', num2str(queueing_time)]);
disp(['Process Time: ', num2str(process_time)]);
disp(['Total Time: ', num2str(total_time)]);

%% 
function total_time = calculate_total_time(queueing_time, process_time)
  total_time = queueing_time + process_time;
end

% Example usage:
queueing_time = 289;
process_time = 154;
total_time = calculate_total_time(queueing_time, process_time);

disp(['Total Time: ', num2str(total_time)]);

queueing_time = 100;
process_time = 50;
total_time = calculate_total_time(queueing_time, process_time);
disp(['Total Time: ', num2str(total_time)]);
%%
time_data.queueing.time = 289;
time_data.queueing.units = 'ms'; % Add units
time_data.process.time = 154;
time_data.process.units = 'ms';

total_time = time_data.queueing.time + time_data.process.time;

disp(['Total Time: ', num2str(total_time), ' ', time_data.queueing.units]);
%% 
queueing_times = [289, 300, 250];
process_times = [154, 160, 140];

total_times = queueing_times + process_times;

disp('Total Times:');
disp(total_times);

% Or to display each individually:
for i = 1:length(total_times)
    disp(['Event ', num2str(i), ': Total Time = ', num2str(total_times(i))]);
end