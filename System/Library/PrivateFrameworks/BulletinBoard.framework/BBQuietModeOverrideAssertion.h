/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSAction;

@interface BBQuietModeOverrideAssertion : NSObject {

	BSAction* _assertionAction;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) BOOL isValid; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithAction:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
@end
