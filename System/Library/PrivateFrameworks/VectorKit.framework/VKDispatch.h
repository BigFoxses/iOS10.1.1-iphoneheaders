/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKDispatch : NSObject {

	NSObject*<OS_dispatch_queue> _homeQueue;
	NSObject*<OS_dispatch_queue> _layoutQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_queue> _layoutWorkerQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> homeQueue;                      //@synthesize homeQueue=_homeQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutQueue;                    //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                    //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutWorkerQueue;              //@synthesize layoutWorkerQueue=_layoutWorkerQueue - In the implementation block
+(id)defaultDispatch;
+(id)tileDecodeQueue;
+(id)preemptiveLoadQueue;
+(id)tileDecodeStylingQueue;
+(id)iconRenderQueue;
+(id)textureManagerRootQueue;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)homeQueue;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(NSObject*<OS_dispatch_queue>)layoutQueue;
-(id)initWithHomeQueue:(id)arg1 ;
-(id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3 layoutWorkerQueue:(id)arg4 ;
-(id)_newLayoutQueue:(const char*)arg1 ;
-(id)_newRenderQueue:(const char*)arg1 ;
-(id)_newLayoutWorkerQueue:(const char*)arg1 ;
-(NSObject*<OS_dispatch_queue>)layoutWorkerQueue;
@end
