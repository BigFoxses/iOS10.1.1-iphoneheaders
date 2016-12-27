/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface SagaPublishPlaylistOperation : CloudLibraryOperation {

	unsigned long long _sagaID;
	NSString* _playlistGlobalID;
	NSString* _playlistShareURL;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) NSString * playlistShareURL;              //@synthesize playlistShareURL=_playlistShareURL - In the implementation block
-(id)initWithSagaID:(unsigned long long)arg1 ;
-(NSString *)playlistShareURL;
-(void)main;
-(NSString *)playlistGlobalID;
@end
