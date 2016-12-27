/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _EARSpeechRecognitionResultStream <NSObject>
@optional
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;

@required
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;

@end
