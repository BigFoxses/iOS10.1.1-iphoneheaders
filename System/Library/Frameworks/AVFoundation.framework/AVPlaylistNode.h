/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVPlaylist;


@protocol AVPlaylistNode <NSObject>
@property (nonatomic,readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) BOOL appliesChangesImmediately; 
@property (nonatomic,__weak,readonly) AVPlaylist * parentPlaylist; 
@required
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)applyPendingChangesWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)appliesChangesImmediately;
-(NSArray *)metadata;
-(void)setMetadata:(id)arg1;
-(AVPlaylist *)parentPlaylist;

@end

