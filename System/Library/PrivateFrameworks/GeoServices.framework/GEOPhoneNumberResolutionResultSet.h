/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithXPCDictionaryRepresentation:(id)arg1 ;
-(id)xpcDictionaryRepresentation;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
@end

