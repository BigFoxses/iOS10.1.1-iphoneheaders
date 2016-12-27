/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCMiddlewareExceptionEvent, NSString;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _type;
	unsigned _errorCode;
	AWDNFCMiddlewareExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) AWDNFCMiddlewareExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
-(void)setMetric:(AWDNFCMiddlewareExceptionEvent *)arg1 ;
-(AWDNFCMiddlewareExceptionEvent *)metric;
@end
