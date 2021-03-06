/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CRSearchQuery : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;
	NSArray* _domains;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _options;
	/*^block*/id _weightDecayer;
	/*^block*/id _comparator;

}

@property (nonatomic,retain) NSPredicate * predicate;                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * domains;                                        //@synthesize domains=_domains - In the implementation block
@property (assign,nonatomic) unsigned long long implicitGroupThreshold;              //@synthesize implicitGroupThreshold=_implicitGroupThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id weightDecayer;                                         //@synthesize weightDecayer=_weightDecayer - In the implementation block
@property (nonatomic,copy) id comparator;                                            //@synthesize comparator=_comparator - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4 ;
+(/*^block*/id)frecencyComparator;
+(id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4 ;
-(id)comparator;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setDomains:(NSArray *)arg1 ;
-(NSArray *)domains;
-(unsigned long long)implicitGroupThreshold;
-(id)weightDecayer;
-(void)setWeightDecayer:(id)arg1 ;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 ;
-(void)setComparator:(id)arg1 ;
@end

