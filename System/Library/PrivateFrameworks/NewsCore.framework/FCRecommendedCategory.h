/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCRecommendedCategory : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSArray* _topicTagIDs;
	NSArray* _channelTagIDs;
	NSArray* _subcategories;
	NSArray* _curatedTagIDs;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * topicTagIDs;                //@synthesize topicTagIDs=_topicTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * channelTagIDs;              //@synthesize channelTagIDs=_channelTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * subcategories;              //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) NSArray * curatedTagIDs;              //@synthesize curatedTagIDs=_curatedTagIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(NSArray *)subcategories;
-(NSArray *)topicTagIDs;
-(NSArray *)channelTagIDs;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6 ;
-(NSArray *)curatedTagIDs;
@end

