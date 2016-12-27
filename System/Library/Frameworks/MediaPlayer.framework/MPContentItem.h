/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject {

	MRContentItemRef _mrContentItem;
	MPMediaItemArtwork* _artwork;
	double _artworkWidthHint;
	double _artworkHeightHint;
	BOOL _artworkingLoading;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork; 
@property (assign,nonatomic) float playbackProgress; 
@property (assign,getter=isStreamingContent,nonatomic) BOOL streamingContent; 
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent; 
@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setContainer:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithIdentifier:(id)arg1 ;
-(MPMediaItemArtwork *)artwork;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(BOOL)isExplicitContent;
-(float)playbackProgress;
-(MRContentItemRef)_mediaRemoteContentItem;
-(id)_initWithMediaRemoteContentItem:(MRContentItemRef)arg1 ;
-(BOOL)isContainer;
-(void)_postItemChangedNotification;
-(BOOL)isStreamingContent;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setStreamingContent:(BOOL)arg1 ;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)_setArtworkSize:(double)arg1 height:(double)arg2 ;
-(BOOL)isArtworkReady;
-(id)_notification;
-(void)setPlaybackProgress:(float)arg1 ;
-(BOOL)isPlayable;
@end
