//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString;

@interface TCAddOneBlogDic : TCAPIRequest
{
    NSString *_paramContent;
    NSString *_paramTitle;
}

+ (id)dictionary;
@property(retain, nonatomic) NSString *paramTitle; // @synthesize paramTitle=_paramTitle;
@property(retain, nonatomic) NSString *paramContent; // @synthesize paramContent=_paramContent;
- (void).cxx_destruct;

@end

