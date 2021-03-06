/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol NSSecureCodingNSCopying;
@class PARSession, NSOrderedSet, NSDictionary, NSObject;

@interface FTParsecZKWNewsOperation : FCOperation {

	PARSession* _session;
	NSOrderedSet* _resultSearchResultIDs;
	NSDictionary* _resultSearchResultsBySearchResultID;
	NSDictionary* _resultSearchResultTrackingElementsBySearchResultID;
	NSObject*<NSSecureCoding>*<NSCopying> _resultSectionEventTrackingElement;
	/*^block*/id _newsCompletionHandler;

}

@property (nonatomic,copy) NSOrderedSet * resultSearchResultIDs;                                                 //@synthesize resultSearchResultIDs=_resultSearchResultIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * resultSearchResultsBySearchResultID;                                   //@synthesize resultSearchResultsBySearchResultID=_resultSearchResultsBySearchResultID - In the implementation block
@property (nonatomic,copy) NSDictionary * resultSearchResultTrackingElementsBySearchResultID;                    //@synthesize resultSearchResultTrackingElementsBySearchResultID=_resultSearchResultTrackingElementsBySearchResultID - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> resultSectionEventTrackingElement;              //@synthesize resultSectionEventTrackingElement=_resultSectionEventTrackingElement - In the implementation block
@property (nonatomic,retain) PARSession * session;                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id newsCompletionHandler;                                                             //@synthesize newsCompletionHandler=_newsCompletionHandler - In the implementation block
-(NSDictionary *)resultSearchResultsBySearchResultID;
-(NSOrderedSet *)resultSearchResultIDs;
-(NSDictionary *)resultSearchResultTrackingElementsBySearchResultID;
-(NSObject*<NSSecureCoding>*<NSCopying>)resultSectionEventTrackingElement;
-(void)setNewsCompletionHandler:(id)arg1 ;
-(id)newsCompletionHandler;
-(void)setResultSearchResultIDs:(NSOrderedSet *)arg1 ;
-(void)setResultSearchResultsBySearchResultID:(NSDictionary *)arg1 ;
-(void)setResultSearchResultTrackingElementsBySearchResultID:(NSDictionary *)arg1 ;
-(void)setResultSectionEventTrackingElement:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(id)init;
-(void)setSession:(PARSession *)arg1 ;
-(PARSession *)session;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
@end

