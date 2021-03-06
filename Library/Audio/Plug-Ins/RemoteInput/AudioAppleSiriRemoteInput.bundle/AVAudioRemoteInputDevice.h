/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/AudioAppleSiriRemoteInput.bundle/AudioAppleSiriRemoteInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVAudioFormat, NSString;


@protocol AVAudioRemoteInputDevice <NSObject>
@property (nonatomic,copy) id audioInputBlock; 
@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,retain) AVAudioFormat * format; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@required
-(id)audioInputBlock;
-(AVAudioFormat *)format;
-(NSArray *)supportedFormats;
-(NSString *)deviceIdentifier;
-(void)setSupportedFormats:(id)arg1;
-(void)setFormat:(id)arg1;
-(void)stopRecordingWithCompletionBlock:(/*^block*/id)arg1;
-(void)setAudioInputBlock:(/*^block*/id)arg1;
-(void)startRecordingWithCompletionBlock:(/*^block*/id)arg1;

@end

