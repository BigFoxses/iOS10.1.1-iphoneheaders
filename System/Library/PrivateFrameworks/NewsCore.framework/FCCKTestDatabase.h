/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKDatabase.h>

@class NSMutableArray, FCCKTestFeedQueryEndpoint, FCCKTestOrderFeedQueryEndpoint;

@interface FCCKTestDatabase : FCCKDatabase {

	BOOL _simulateNetworkError;
	NSMutableArray* _records;
	FCCKTestFeedQueryEndpoint* _feedQueryEndpoint;
	FCCKTestOrderFeedQueryEndpoint* _orderFeedQueryEndpoint;

}

@property (nonatomic,retain) NSMutableArray * records;                                             //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) FCCKTestFeedQueryEndpoint * feedQueryEndpoint;                        //@synthesize feedQueryEndpoint=_feedQueryEndpoint - In the implementation block
@property (nonatomic,retain) FCCKTestOrderFeedQueryEndpoint * orderFeedQueryEndpoint;              //@synthesize orderFeedQueryEndpoint=_orderFeedQueryEndpoint - In the implementation block
@property (assign,nonatomic) BOOL simulateNetworkError;                                            //@synthesize simulateNetworkError=_simulateNetworkError - In the implementation block
-(NSMutableArray *)records;
-(void)addOperation:(id)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(id)insertTestArticle;
-(id)initWithDatabase:(id)arg1 middleware:(id)arg2 ;
-(BOOL)simulateNetworkError;
-(FCCKTestFeedQueryEndpoint *)feedQueryEndpoint;
-(FCCKTestOrderFeedQueryEndpoint *)orderFeedQueryEndpoint;
-(void)insertTestArticleWithID:(id)arg1 properties:(id)arg2 ;
-(void)updateArticleWithID:(id)arg1 properties:(id)arg2 ;
-(void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3 ;
-(id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3 ;
-(void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 ;
-(void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3 ;
-(void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2 ;
-(id)insertTestArticleWithProperties:(id)arg1 ;
-(void)deleteArticleWithID:(id)arg1 ;
-(id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 ;
-(id)insertTestTagWithType:(id)arg1 properties:(id)arg2 ;
-(void)updateTagWithID:(id)arg1 properties:(id)arg2 ;
-(void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2 ;
-(void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4 ;
-(void)populateWithBasicTestFeeds;
-(void)deleteFeedID:(id)arg1 ;
-(id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2 ;
-(void)setSimulateNetworkError:(BOOL)arg1 ;
-(void)setFeedQueryEndpoint:(FCCKTestFeedQueryEndpoint *)arg1 ;
-(void)setOrderFeedQueryEndpoint:(FCCKTestOrderFeedQueryEndpoint *)arg1 ;
@end

