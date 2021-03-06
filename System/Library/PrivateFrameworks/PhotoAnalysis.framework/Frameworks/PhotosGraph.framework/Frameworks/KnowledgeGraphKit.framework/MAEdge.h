/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAElement.h>

@class MANode;

@interface MAEdge : MAElement {

	MANode* _sourceNode;
	MANode* _targetNode;

}

@property (nonatomic,__weak,readonly) MANode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,__weak,readonly) MANode * targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
-(id)init;
-(id)description;
-(MANode *)sourceNode;
-(BOOL)isLoop;
-(MANode *)targetNode;
-(id)shortDescription;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
-(BOOL)isUnique;
-(BOOL)isEqualToEdge:(id)arg1 ;
-(id)initWithLabel:(unsigned short)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(void)_loadPersistentStoreProperties;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(void)_updatePersistentStoreElement;
-(id)visualString;
-(id)visualStringWithName:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertiesKeys:(id)arg2 ;
@end

