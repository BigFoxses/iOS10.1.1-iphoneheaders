/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PSIAsset : NSObject <NSCopying> {

	NSMutableDictionary* _synonymsByOriginalWord;
	NSMutableDictionary* _categoriesToPairedOwningCategories;
	NSString* _uuid;
	NSArray* _contentStrings;
	CFArrayRef _categories;
	CFArrayRef _owningCategories;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * contentStrings;                 //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef categories;                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef owningCategories;              //@synthesize owningCategories=_owningCategories - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(CFArrayRef)categories;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(NSString *)uuid;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 categoryAndOwningCategoryArePaired:(BOOL)arg4 ;
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(id)_initForCopy:(BOOL)arg1 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)pairedCategoryForCategory:(short)arg1 ;
-(CFArrayRef)owningCategories;
-(NSArray *)contentStrings;
-(void)setUUID:(id)arg1 ;
-(void)reverse;
@end

