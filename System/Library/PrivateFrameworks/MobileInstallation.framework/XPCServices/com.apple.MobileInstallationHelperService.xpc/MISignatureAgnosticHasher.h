/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.MobileInstallationHelperService/com.apple.MobileInstallationHelperService-Structs.h>
@class NSDictionary, NSURL, NSString;

@interface MISignatureAgnosticHasher : NSObject {

	BOOL _hasNamedSection;
	int _fd;
	unsigned _countOfSlicesWithNamedSection;
	NSDictionary* _hashes;
	NSURL* _url;
	NSString* _sectionName;

}

@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * sectionName;                            //@synthesize sectionName=_sectionName - In the implementation block
@property (assign,nonatomic) int fd;                                              //@synthesize fd=_fd - In the implementation block
@property (assign,nonatomic) unsigned countOfSlicesWithNamedSection;              //@synthesize countOfSlicesWithNamedSection=_countOfSlicesWithNamedSection - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedSection;                              //@synthesize hasNamedSection=_hasNamedSection - In the implementation block
@property (nonatomic,readonly) NSDictionary * hashes;                             //@synthesize hashes=_hashes - In the implementation block
+(id)packedNumberForCPUType:(int)arg1 subtype:(int)arg2 ;
+(void)unpackPackedCpuTypeAndSubType:(id)arg1 cputype:(int*)arg2 subtype:(int*)arg3 ;
-(id)initWithExecutable:(id)arg1 searchForSectionNamed:(id)arg2 ;
-(BOOL)performHashWithError:(id*)arg1 ;
-(BOOL)hasNamedSection;
-(unsigned)countOfSlicesWithNamedSection;
-(void)setCountOfSlicesWithNamedSection:(unsigned)arg1 ;
-(id)_hashSliceAtOffset:(long long)arg1 withSize:(long long)arg2 machHeaderAndCommands:(const mach_header*)arg3 dictionaryKey:(id*)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(NSURL *)url;
-(NSString *)sectionName;
-(NSDictionary *)hashes;
-(int)fd;
-(void)setFd:(int)arg1 ;
@end

