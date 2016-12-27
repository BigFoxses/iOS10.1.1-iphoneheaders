/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNUIURLDestinationID.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNUIURLDestinationID, CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _stringValue;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (nonatomic,copy,readonly) NSString * normalizedStringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CFPhoneNumberRef phoneNumberRef; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * digits; 
@property (nonatomic,copy,readonly) NSString * formattedStringValue; 
@property (nonatomic,copy,readonly) NSString * formattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * unformattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithStringValue:(id)arg1 ;
+(id)defaultCountryCode;
-(NSString *)normalizedStringValue;
-(id)_cnui_URLDestinationID;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSString *)countryCode;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)lastFourDigits;
-(NSString *)formattedInternationalStringValue;
-(NSString *)unformattedInternationalStringValue;
-(CFPhoneNumberRef)phoneNumberRef;
-(id)initWithStringValue:(id)arg1 ;
-(BOOL)isLikePhoneNumber:(id)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(NSString *)formattedStringValue;
-(NSString *)digits;
@end
