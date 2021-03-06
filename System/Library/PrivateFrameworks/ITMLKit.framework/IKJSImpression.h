/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSImpression.h>
@class NSString, NSArray;


@protocol IKJSImpression <JSExport>
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
@required
-(NSString *)data;
-(long long)index;
-(NSString *)impressionQueueTag;
-(NSArray *)children;
-(id)parent;
-(NSArray *)timestamps;

@end

#import <libobjc.A.dylib/JSExport.h>

@class NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <IKJSImpression, JSExport> {

	IKJSImpression* _parentImpression;
	NSString* _metricsTag;
	NSString* _metricsData;
	NSMutableArray* _mutableTimestamps;
	NSMutableArray* _mutableChildren;
	long long _indexInParent;

}

@property (nonatomic,copy) NSString * metricsTag;                                   //@synthesize metricsTag=_metricsTag - In the implementation block
@property (nonatomic,copy) NSString * metricsData;                                  //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTimestamps;                    //@synthesize mutableTimestamps=_mutableTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                      //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic,__weak) IKJSImpression * parentImpression;              //@synthesize parentImpression=_parentImpression - In the implementation block
@property (assign,nonatomic) long long indexInParent;                               //@synthesize indexInParent=_indexInParent - In the implementation block
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
-(id)description;
-(NSString *)data;
-(long long)index;
-(void)linkReferences;
-(IKJSImpression *)parentImpression;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3 queueTag:(id)arg4 ;
-(void)addTimestamp:(long long)arg1 ;
-(NSMutableArray *)mutableTimestamps;
-(NSMutableArray *)mutableChildren;
-(NSString *)impressionQueueTag;
-(NSString *)metricsTag;
-(NSString *)metricsData;
-(long long)indexInParent;
-(void)setMutableTimestamps:(NSMutableArray *)arg1 ;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)setParentImpression:(IKJSImpression *)arg1 ;
-(void)setMetricsTag:(NSString *)arg1 ;
-(void)setMetricsData:(NSString *)arg1 ;
-(void)setIndexInParent:(long long)arg1 ;
-(NSArray *)children;
-(id)parent;
-(NSArray *)timestamps;
-(void)addChild:(id)arg1 ;
@end

