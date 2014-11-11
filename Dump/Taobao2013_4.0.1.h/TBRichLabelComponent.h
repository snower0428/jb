//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TBRichLabelComponent : NSObject
{
    int _componentIndex;
    NSString *_text;
    NSString *_tagLabel;
    NSMutableDictionary *_attributes;
    int _position;
}

+ (id)componentWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
+ (id)componentWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int componentIndex; // @synthesize componentIndex=_componentIndex;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
- (id)initWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;

@end

