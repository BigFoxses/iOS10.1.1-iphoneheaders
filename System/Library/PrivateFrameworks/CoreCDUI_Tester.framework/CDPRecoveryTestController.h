/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDUI_Tester.framework/CoreCDUI_Tester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDBackupInfoRecoveryFlowController, NSArray, UINavigationController;

@interface CDPRecoveryTestController : NSObject {

	CDPDBackupInfoRecoveryFlowController* _recoveryController;
	NSArray* _mockDevices;
	UINavigationController* _navController;

}
-(void)setUp;
-(id)initWithDevices:(id)arg1 andNavigationController:(id)arg2 ;
-(void)beginIDMSRecoveryFlowWithSecretFailure;
-(void)beginIDMSRecoveryFlow;
-(id)dummyRecoveryInfo;
@end

