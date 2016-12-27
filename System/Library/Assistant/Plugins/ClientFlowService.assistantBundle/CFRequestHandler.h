/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CFServiceHelper, CFLogQueuer;

@interface CFRequestHandler : NSObject {

	CFServiceHelper* _serviceHelper;
	CFLogQueuer* _logQueuer;

}

@property (retain) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (retain) CFLogQueuer * logQueuer;                      //@synthesize logQueuer=_logQueuer - In the implementation block
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(CFServiceHelper *)serviceHelper;
-(CFLogQueuer *)logQueuer;
-(void)submitMetricsForDomain:(id)arg1 timings:(id)arg2 commandProcessor:(id)arg3 originalCommandId:(id)arg4 ;
-(void)sendClientFlowStateWithCommandProcessor:(id)arg1 cachedScriptDomainsAndCheckSums:(id)arg2 ;
-(void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 commandProcessor:(id)arg3 metrics:(id)arg4 startOfExecution:(double)arg5 ;
-(void)performFlowCommand:(id)arg1 connection:(id)arg2 useCachedJSContext:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)performProviderCommand:(id)arg1 connection:(id)arg2 useCachedJSContext:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)failureResponseForCommand:(id)arg1 status:(long long)arg2 ;
-(void)setServiceHelper:(CFServiceHelper *)arg1 ;
-(void)setLogQueuer:(CFLogQueuer *)arg1 ;
@end
