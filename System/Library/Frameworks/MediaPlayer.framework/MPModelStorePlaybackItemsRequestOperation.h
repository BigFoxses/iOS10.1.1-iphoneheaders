/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelStorePlaybackItemsRequest;

@interface MPModelStorePlaybackItemsRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelStorePlaybackItemsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) MPModelStorePlaybackItemsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                                      //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelStorePlaybackItemsRequest *)request;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)responseHandler;
-(void)execute;
@end
