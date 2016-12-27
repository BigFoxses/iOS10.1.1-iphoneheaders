/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd {

	BOOL enable;
	BOOL onetimeonly;
	NSString* trigger;
	SALocation* location;
	SAPerson* saPerson;
	NSString* fenceType;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) BOOL onetimeonly; 
@property (nonatomic,copy) NSString * trigger; 
@property (nonatomic,copy) SALocation * location; 
@property (nonatomic,retain) SAPerson * saPerson; 
@property (nonatomic,copy) NSString * fenceType; 
+(id)bundle;
-(id)requestedLocationDictionary;
-(id)postalAddressWithSALocation:(id)arg1 ;
-(void)setOnetimeonly:(BOOL)arg1 ;
-(void)setSaPerson:(SAPerson *)arg1 ;
-(BOOL)onetimeonly;
-(SAPerson *)saPerson;
-(id)fullAddressDictionaryForSALocation:(id)arg1 ;
-(id)path;
-(BOOL)enable;
-(SALocation *)location;
-(NSString *)trigger;
-(void)setLocation:(SALocation *)arg1 ;
-(id)result;
-(void)setTrigger:(NSString *)arg1 ;
-(id)addressString;
-(void)setEnable:(BOOL)arg1 ;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(id)allHandles;
-(id)jsonBodyDictionary;
@end
