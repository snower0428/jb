//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTADInfo.h"

#import "NSCoding.h"

@class NSString;

@interface MTADInfoGroup : MTADInfo <NSCoding>
{
    NSString *_URLString;
    NSString *_bigImgURLString;
    NSString *_sendURLString;
}

@property(copy, nonatomic) NSString *sendURLString; // @synthesize sendURLString=_sendURLString;
@property(copy, nonatomic) NSString *bigImgURLString; // @synthesize bigImgURLString=_bigImgURLString;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

