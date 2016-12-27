/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSArray *)topology;
-(void)setTopology:(NSArray *)arg1 ;
@end
