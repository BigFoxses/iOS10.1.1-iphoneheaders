/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSError;

@interface FCCoverArticlesCatchUpOperation : FCOperation {

	FCCloudContext* _context;
	NSArray* _headlines;
	NSArray* _supplementalHeadlines;
	NSError* _error;

}

@property (copy) NSArray * headlines;                               //@synthesize headlines=_headlines - In the implementation block
@property (copy) NSArray * supplementalHeadlines;                   //@synthesize supplementalHeadlines=_supplementalHeadlines - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;              //@synthesize context=_context - In the implementation block
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
-(NSArray *)supplementalHeadlines;
-(id)_supplementalCoverArticleListIDs;
-(void)setSupplementalHeadlines:(NSArray *)arg1 ;
@end
