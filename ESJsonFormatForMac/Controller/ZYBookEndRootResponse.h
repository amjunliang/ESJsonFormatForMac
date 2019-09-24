//
//Created by ESJsonFormatForMac on 19/09/25.
//

#import <Foundation/Foundation.h>

@class ZYBookEndGlossary,ZYBookEndGlossdiv,ZYBookEndGlosslist,ZYBookEndGlossentry,ZYBookEndGlossdef;
@interface ZYBookEndRootResponse : NSObject

@property (nonatomic, strong) ZYBookEndGlossary *glossary;

@end

@interface ZYBookEndGlossary : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, strong) ZYBookEndGlossdiv *GlossDiv;

@end

@interface ZYBookEndGlossdiv : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, strong) NSArray *GlossList;

@end

@interface ZYBookEndGlosslist : NSObject

@property (nonatomic, strong) ZYBookEndGlossentry *GlossEntry;

@end

@interface ZYBookEndGlossentry : NSObject

@property (nonatomic, copy) NSString *SortAs;

@property (nonatomic, copy) NSString *Abbrev;

@property (nonatomic, copy) NSString *GlossTerm;

@property (nonatomic, strong) ZYBookEndGlossdef *GlossDef;

@property (nonatomic, copy) NSString *GlossSee;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *Acronym;

@end

@interface ZYBookEndGlossdef : NSObject

@property (nonatomic, strong) NSArray *GlossSeeAlso;

@property (nonatomic, copy) NSString *para;

@end
