/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/_EARSystemResult.h>

@class NSArray;

@interface _EARCombinedResult : _EARSystemResult {

	NSArray* _nBestStrings;
	NSArray* _nBestSourceIndexes;
	NSArray* _originalRanks;

}

@property (nonatomic,copy) NSArray * nBestStrings;                    //@synthesize nBestStrings=_nBestStrings - In the implementation block
@property (nonatomic,copy) NSArray * nBestSourceIndexes;              //@synthesize nBestSourceIndexes=_nBestSourceIndexes - In the implementation block
@property (nonatomic,copy) NSArray * originalRanks;                   //@synthesize originalRanks=_originalRanks - In the implementation block
-(NSArray *)nBestStrings;
-(void)setNBestStrings:(NSArray *)arg1 ;
-(NSArray *)nBestSourceIndexes;
-(void)setNBestSourceIndexes:(NSArray *)arg1 ;
-(NSArray *)originalRanks;
-(void)setOriginalRanks:(NSArray *)arg1 ;
@end
