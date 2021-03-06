/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetExpertCenter/Loggers/SystemLogger.bundle/SystemLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECFeedbackLogger.h>

@class PETScalarEventTracker, NSString;

@interface BasicLogger : NSObject <_DECFeedbackLogger> {

	PETScalarEventTracker* _mmAppSuggestion;
	PETScalarEventTracker* _heroAppSuggestion;

}

@property (nonatomic,retain) PETScalarEventTracker * mmAppSuggestion;                //@synthesize mmAppSuggestion=_mmAppSuggestion - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * heroAppSuggestion;              //@synthesize heroAppSuggestion=_heroAppSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMmAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(void)setHeroAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)mmAppSuggestion;
-(PETScalarEventTracker *)heroAppSuggestion;
-(id)init;
-(void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4 ;
@end

