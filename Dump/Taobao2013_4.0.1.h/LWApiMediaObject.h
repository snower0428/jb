//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LWApiMediaObject : NSObject
{
    NSString *_title;
    NSString *_description;
    NSString *_thumbImageURL;
    NSString *_scheme;
}

+ (id)object;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *thumbImageURL; // @synthesize thumbImageURL=_thumbImageURL;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)structure:(id)arg1;
- (id)parse;

@end

