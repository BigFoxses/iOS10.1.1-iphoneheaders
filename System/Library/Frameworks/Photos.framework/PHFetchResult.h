/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHObjectIDBackedFetchResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSArray, NSSet, PHBatchFetchingArray, NSObject, NSString, NSNumber, _PHFetchRequestWrapper, PHQuery, NSFetchRequest;

@interface PHFetchResult : NSObject <PHObjectIDBackedFetchResult, NSCopying, NSFastEnumeration> {

	PHBatchFetchingArray* _fetchedObjects;
	NSArray* _seedOIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _registeredForChangeNotificationDeltas;
	NSString* _fetchType;
	NSSet* _fetchPropertySets;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	unsigned long long _audiosCount;
	NSNumber* _prefetchCount;
	_PHFetchRequestWrapper* _fetchRequestWrapper;
	BOOL _preventsClearingOIDCache;
	PHQuery* _query;
	long long _chunkSizeForFetch;

}

@property (readonly) PHQuery * query;                                    //@synthesize query=_query - In the implementation block
@property (readonly) NSString * fetchType;                               //@synthesize fetchType=_fetchType - In the implementation block
@property (readonly) NSSet * fetchPropertySets;                          //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (readonly) NSArray * fetchedObjects; 
@property (readonly) NSFetchRequest * fetchRequest; 
@property (assign) long long chunkSizeForFetch;                          //@synthesize chunkSizeForFetch=_chunkSizeForFetch - In the implementation block
@property (assign,nonatomic) BOOL preventsClearingOIDCache;              //@synthesize preventsClearingOIDCache=_preventsClearingOIDCache - In the implementation block
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
@property (readonly) NSArray * fetchedObjectIDs; 
@property (readonly) NSSet * fetchedObjectIDsSet; 
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(BOOL)arg2 ;
+(id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2 ;
+(id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2 ;
+(id)pl_fetchResultForAssetContainerList:(id)arg1 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg1 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg1 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg1 ;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PH9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(PHQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)containerIdentifier;
-(id)pl_photoLibraryObject;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(long long)chunkSizeForFetch;
-(BOOL)preventsClearingOIDCache;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(id)fetchedObjectsUsingManagedObjectContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4 ;
-(BOOL)isRegisteredForChangeNotificationDeltas;
-(void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1 ;
-(void)getMediaTypeCounts;
-(id)localIdentifiers;
-(void)setPreventsClearingOIDCache:(BOOL)arg1 ;
-(NSString *)fetchType;
-(NSArray *)fetchedObjectIDs;
-(NSArray *)fetchedObjects;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id)photoLibrary;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)copyWithOptions:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(NSSet *)fetchedObjectIDsSet;
-(NSSet *)fetchPropertySets;
@end

