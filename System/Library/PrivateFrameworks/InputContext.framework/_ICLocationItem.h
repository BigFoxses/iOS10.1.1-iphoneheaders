/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputContext/_ICPredictedItem.h>

@class NSString, NSDate;

@interface _ICLocationItem : _ICPredictedItem {

	BOOL _shouldAggregate;
	BOOL _originatingBundleIDWhitelisted;
	BOOL _targetBundleIDWhitelisted;
	NSString* _name;
	NSString* _label;
	NSString* _shortValue;
	NSString* _originatingBundleID;
	NSDate* _createdAt;
	NSString* _source;
	unsigned long long _predictionAge;

}

@property (nonatomic,copy,readonly) NSString * name;                                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortValue;                                                               //@synthesize shortValue=_shortValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingBundleID;                                                      //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,readonly) BOOL shouldAggregate;                                                                     //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdAt;                                                                  //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionAge;                                                         //@synthesize predictionAge=_predictionAge - In the implementation block
@property (getter=isOriginatingBundleIDWhitelisted,nonatomic,readonly) BOOL originatingBundleIDWhitelisted;              //@synthesize originatingBundleIDWhitelisted=_originatingBundleIDWhitelisted - In the implementation block
@property (getter=isTargetBundleIDWhitelisted,nonatomic,readonly) BOOL targetBundleIDWhitelisted;                        //@synthesize targetBundleIDWhitelisted=_targetBundleIDWhitelisted - In the implementation block
-(NSString *)name;
-(NSString *)label;
-(NSString *)source;
-(BOOL)shouldAggregate;
-(NSString *)originatingBundleID;
-(NSString *)shortValue;
-(NSDate *)createdAt;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 proactiveTrigger:(id)arg3 name:(id)arg4 label:(id)arg5 value:(id)arg6 shortValue:(id)arg7 originatingBundleID:(id)arg8 shouldAggregate:(BOOL)arg9 metadata:(id)arg10 ;
-(unsigned long long)predictionAge;
-(BOOL)isOriginatingBundleIDWhitelisted;
-(BOOL)isTargetBundleIDWhitelisted;
@end

