/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAPrearmContextXPC;
#import <LocalAuthentication/LocalAuthentication-Structs.h>
@class LAClient, NSNumber, NSData, NSString;

@interface LAContext : NSObject {

	LAClient* _client;
	id<LAPrearmContextXPC> _prearmContext;
	BOOL _cancelButtonVisible;
	BOOL _fallbackButtonVisible;
	NSNumber* _maxBiometryFailures;
	NSData* _evaluatedPolicyDomainState;
	NSData* _externalizedContext;

}

@property (nonatomic,retain) NSData * externalizedContext;                                           //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,getter=isCancelButtonVisible,nonatomic) BOOL cancelButtonVisible;                  //@synthesize cancelButtonVisible=_cancelButtonVisible - In the implementation block
@property (assign,getter=isFallbackButtonVisible,nonatomic) BOOL fallbackButtonVisible;              //@synthesize fallbackButtonVisible=_fallbackButtonVisible - In the implementation block
@property (nonatomic,retain) NSData * evaluatedPolicyDomainState;                                    //@synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState - In the implementation block
@property (nonatomic,retain) NSNumber * touchIDAuthenticationRetryLimit; 
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate; 
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@property (nonatomic,copy) NSString * localizedCancelTitle; 
@property (nonatomic,retain) NSNumber * maxBiometryFailures;                                         //@synthesize maxBiometryFailures=_maxBiometryFailures - In the implementation block
@property (assign,nonatomic) double touchIDAuthenticationAllowableReuseDuration; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 ;
-(id)_hashWithBundleIdentifier:(id)arg1 ;
-(void)setEvaluatedPolicyDomainState:(NSData *)arg1 ;
-(id)_publicErrorFromInternalError:(id)arg1 ;
-(id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)_serverPropertyValueForOption:(long long)arg1 ;
-(void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 ;
-(id)initWithUIDelegate:(id)arg1 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)evaluateAccessControl:(SecAccessControlRef)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)isCredentialSet:(long long)arg1 ;
-(void)prearmTouchIDWithReply:(/*^block*/id)arg1 ;
-(NSString *)localizedCancelTitle;
-(void)setLocalizedCancelTitle:(NSString *)arg1 ;
-(NSNumber *)touchIDAuthenticationRetryLimit;
-(void)setTouchIDAuthenticationRetryLimit:(NSNumber *)arg1 ;
-(double)touchIDAuthenticationAllowableReuseDuration;
-(void)setTouchIDAuthenticationAllowableReuseDuration:(double)arg1 ;
-(NSNumber *)maxBiometryFailures;
-(void)setMaxBiometryFailures:(NSNumber *)arg1 ;
-(NSData *)evaluatedPolicyDomainState;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(BOOL)isCancelButtonVisible;
-(BOOL)isFallbackButtonVisible;
-(void)setFallbackButtonVisible:(BOOL)arg1 ;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(id<LAUIDelegate>)uiDelegate;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedFallbackTitle;
-(id)initWithExternalizedContext:(id)arg1 ;
-(BOOL)setCredential:(id)arg1 type:(long long)arg2 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSData *)externalizedContext;
-(void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(id)evaluationMechanismsForPolicy:(long long)arg1 error:(id*)arg2 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

