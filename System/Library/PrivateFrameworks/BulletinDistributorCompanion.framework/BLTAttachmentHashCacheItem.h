/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL;

@interface BLTAttachmentHashCacheItem : NSObject {

	NSData* _data;
	NSURL* _url;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                //@synthesize url=_url - In the implementation block
+(id)attachmentHashCacheItemWithURL:(id)arg1 ;
+(id)attachmentHashCacheItemWithData:(id)arg1 ;
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 ;
-(BOOL)MD5:(unsigned char)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
@end
