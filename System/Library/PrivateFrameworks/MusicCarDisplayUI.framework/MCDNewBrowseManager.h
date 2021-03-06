/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface MCDNewBrowseManager : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)loadCuratedPlaylistStoreAdamID:(unsigned long long)arg1 requestWithCompletion:(/*^block*/id)arg2 ;
-(void)loadRequestForRadioGenresWithCompletion:(/*^block*/id)arg1 ;
-(void)loadRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)additionalRequestForParentSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createRequest;
-(void)additionalRequestForRadioGenresForParentSection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

