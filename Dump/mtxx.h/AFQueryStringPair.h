//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AFQueryStringPair : NSObject
{
    id _field;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)URLEncodedStringValueWithEncoding:(unsigned int)arg1;
- (id)initWithField:(id)arg1 value:(id)arg2;

@end

