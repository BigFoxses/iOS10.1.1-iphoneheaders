/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFZlibDataDecompressionOptions : NSObject {

	BOOL _decompressAllAtOnce;
	int _windowBits;
	/*^block*/id _createBuffer;
	/*^block*/id _growData;

}

@property (assign,nonatomic) int windowBits;                        //@synthesize windowBits=_windowBits - In the implementation block
@property (nonatomic,copy) id createBuffer;                         //@synthesize createBuffer=_createBuffer - In the implementation block
@property (nonatomic,copy) id growData;                             //@synthesize growData=_growData - In the implementation block
@property (assign,nonatomic) BOOL decompressAllAtOnce;              //@synthesize decompressAllAtOnce=_decompressAllAtOnce - In the implementation block
+(id)defaultOptions;
-(int)windowBits;
-(void)setWindowBits:(int)arg1 ;
-(void)setCreateBuffer:(id)arg1 ;
-(void)setGrowData:(id)arg1 ;
-(id)createBuffer;
-(id)growData;
-(BOOL)decompressAllAtOnce;
-(void)setDecompressAllAtOnce:(BOOL)arg1 ;
@end

