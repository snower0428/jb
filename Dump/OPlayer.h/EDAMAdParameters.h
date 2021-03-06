//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSString;

@interface EDAMAdParameters : NSObject <NSCoding>
{
    NSString *__clientLanguage;
    NSArray *__impressions;
    BOOL __supportHtml;
    NSDictionary *__clientProperties;
    BOOL __clientLanguage_isset;
    BOOL __impressions_isset;
    BOOL __supportHtml_isset;
    BOOL __clientProperties_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetClientProperties;
- (BOOL)clientPropertiesIsSet;
@property(retain, nonatomic, getter=clientProperties, setter=setClientProperties:) NSDictionary *clientProperties; // @dynamic clientProperties;
- (void)unsetSupportHtml;
- (BOOL)supportHtmlIsSet;
@property(nonatomic, getter=supportHtml, setter=setSupportHtml:) BOOL supportHtml; // @dynamic supportHtml;
- (void)unsetImpressions;
- (BOOL)impressionsIsSet;
@property(retain, nonatomic, getter=impressions, setter=setImpressions:) NSArray *impressions; // @dynamic impressions;
- (void)unsetClientLanguage;
- (BOOL)clientLanguageIsSet;
@property(retain, nonatomic, getter=clientLanguage, setter=setClientLanguage:) NSString *clientLanguage; // @dynamic clientLanguage;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientLanguage:(id)arg1 impressions:(id)arg2 supportHtml:(BOOL)arg3 clientProperties:(id)arg4;

@end

