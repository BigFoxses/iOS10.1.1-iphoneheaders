/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	BOOL _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id target;                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL async;                //@synthesize async=_async - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
-(BOOL)async;
@end

