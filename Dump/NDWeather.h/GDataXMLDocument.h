//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GDataXMLDocument : NSObject
{
    struct _xmlDoc *xmlDoc_;
}

- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (void)setCharacterEncoding:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)XMLData;
- (id)rootElement;
- (void)dealloc;
- (id)description;
- (void)addStringsCacheToDoc;
- (id)initWithRootElement:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

