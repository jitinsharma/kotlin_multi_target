#import <Foundation/Foundation.h>

@class BaseHelper, BaseHelperCompanion, BaseModel;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
-(instancetype) init __attribute__((unavailable));
+(instancetype) new __attribute__((unavailable));
+(void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface BaseMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface BaseMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

__attribute__((objc_subclassing_restricted))
@interface BaseHelper : KotlinBase
-(instancetype)init NS_SWIFT_NAME(init()) NS_DESIGNATED_INITIALIZER;

-(int32_t)getSumFirst:(int32_t)first second:(int32_t)second NS_SWIFT_NAME(getSum(first:second:));
-(NSArray<NSString*>*)sliceFilterAndSortList:(NSArray<NSString*>*)list NS_SWIFT_NAME(sliceFilterAndSort(list:));
@end;

__attribute__((objc_subclassing_restricted))
@interface BaseHelperCompanion : KotlinBase
+(instancetype)alloc __attribute__((unavailable));
+(instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));

+(instancetype)companion NS_SWIFT_NAME(init());

-(NSString*)getHelperType NS_SWIFT_NAME(getHelperType());
@property (readonly) int32_t helperId;
@end;

__attribute__((objc_subclassing_restricted))
@interface BaseModel : KotlinBase
-(instancetype)initWithId:(int32_t)id type:(NSString*)type NS_SWIFT_NAME(init(id:type:)) NS_DESIGNATED_INITIALIZER;

-(int32_t)component1 NS_SWIFT_NAME(component1());
-(NSString*)component2 NS_SWIFT_NAME(component2());
-(BaseModel*)doCopyId:(int32_t)id type:(NSString*)type NS_SWIFT_NAME(doCopy(id:type:));
@property int32_t id;
@property NSString* type;
@end;

__attribute__((objc_subclassing_restricted))
@interface Base : KotlinBase
+(NSString*)API_KEY NS_SWIFT_NAME(API_KEY());
@end;

NS_ASSUME_NONNULL_END
