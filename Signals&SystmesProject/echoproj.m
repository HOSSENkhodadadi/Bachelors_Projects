
%% HOSSEIN_KHODADADI
%% Student No. 96242035
%% Signals&Systems_Proj.
%**************************************************************************
[x1,Ts ]= audioread('speech_dft_8kHz.wav'); % signal ro mikhoone!
a1=audioplayer(x1,8000,24); 
play(a1) % playesh mikone!
playblocking(a1) %etmam hame asvat ta zaman moshakhas!
y1= filter(1,[1, zeros(1,3999), -0.5, zeros(1,3999), -0.25],x1); % discrete Transfer funnction
a2=audioplayer(y1,8000); % Echo shod!
%plot(x1);
%plot(y1);
play(a2)
playblocking(a2)
y2 = audioread('mimi.wav');
a3=audioplayer(y2,8000);
play(a3)
playblocking(a3)
x2 = filter([1 zeros(1,3999) -0.5 zeros(1,3999) -0.25],1,y2);%Inverse discrete Transfer funnction
a4=audioplayer(x2,8000);% hazfe echo va pakhsh an!
%plot(x2);
%plot(y2);
play(a4)
playblocking(a4)
