/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBHandshake : NSObject {

	unsigned _position;
	unsigned _version;
	unsigned _state;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
@end
