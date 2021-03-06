/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isPaused;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(BOOL)isPurchasing;
-(double)downloadProgress;
-(void)_onQueue_invalidate;
-(id)initWithStoreDownload:(id)arg1 ;
-(BOOL)isCurrentlyPlayable;
-(BOOL)canCancel;
-(void)pauseDownload;
-(BOOL)isRestoreDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(void)resumeDownload;
-(void)cancelDownload;
@end

