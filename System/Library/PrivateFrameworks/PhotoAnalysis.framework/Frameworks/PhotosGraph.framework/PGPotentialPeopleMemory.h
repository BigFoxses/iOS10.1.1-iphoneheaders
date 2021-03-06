/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray;

@interface PGPotentialPeopleMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _peopleNode;
	long long _year;
	NSArray* _facedAssets;

}

@property (readonly) PGGraphNode * peopleNode;              //@synthesize peopleNode=_peopleNode - In the implementation block
@property (readonly) long long year;                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssets;                   //@synthesize facedAssets=_facedAssets - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithSubcategory:(long long)arg1 peopleNode:(id)arg2 year:(long long)arg3 ;
-(PGGraphNode *)peopleNode;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
@end

