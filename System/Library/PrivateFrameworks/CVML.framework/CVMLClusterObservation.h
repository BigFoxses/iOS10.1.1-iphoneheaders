/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLObservation.h>

@class NSArray, NSData, NSSet, NSDictionary;

@interface CVMLClusterObservation : CVMLObservation {

	NSArray* _clusters;
	NSArray* _suggestionsForCluster;
	NSData* _clusterState;
	NSSet* _clusteredFaceIds;
	NSDictionary* _distancesById;

}

@property (retain) NSArray * clusters;                           //@synthesize clusters=_clusters - In the implementation block
@property (retain) NSArray * suggestionsForCluster;              //@synthesize suggestionsForCluster=_suggestionsForCluster - In the implementation block
@property (retain) NSData * clusterState;                        //@synthesize clusterState=_clusterState - In the implementation block
@property (retain) NSSet * clusteredFaceIds;                     //@synthesize clusteredFaceIds=_clusteredFaceIds - In the implementation block
@property (retain) NSDictionary * distancesById;                 //@synthesize distancesById=_distancesById - In the implementation block
-(NSArray *)clusters;
-(void)setClusters:(NSArray *)arg1 ;
-(NSData *)clusterState;
-(void)setClusterState:(NSData *)arg1 ;
-(void)setSuggestionsForCluster:(NSArray *)arg1 ;
-(void)setClusteredFaceIds:(NSSet *)arg1 ;
-(NSArray *)suggestionsForCluster;
-(NSSet *)clusteredFaceIds;
-(NSDictionary *)distancesById;
-(void)setDistancesById:(NSDictionary *)arg1 ;
@end
