/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString;

@interface MRTelevisionNowPlayingState : NSObject {

	BOOL _isPlaying;
	unsigned _playbackState;
	NSDictionary* _nowPlayingInfo;
	NSArray* _supportedCommands;
	NSString* _displayName;
	NSString* _displayID;
	void* _playbackQueue;

}

@property (nonatomic,retain) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) NSArray * supportedCommands;                //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,retain) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * displayID;                       //@synthesize displayID=_displayID - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                     //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL isPlaying;                             //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) void* playbackQueue;                        //@synthesize playbackQueue=_playbackQueue - In the implementation block
-(void)dealloc;
-(BOOL)isPlaying;
-(void)clear;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPlaybackQueue:(void*)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void*)playbackQueue;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setDisplayID:(NSString *)arg1 ;
-(unsigned)playbackState;
-(NSString *)displayID;
-(void)setPlaybackState:(unsigned)arg1 ;
@end

