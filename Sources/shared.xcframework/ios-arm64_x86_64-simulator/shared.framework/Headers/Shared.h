#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedWordLocal, SharedWord, SharedUserLevelLocalCompanion, SharedKbsonBsonObjectId, SharedUserLevelMapper, SharedUserLevel, SharedUserLevelLocal, SharedWordMapper, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedCommonFlow<T>, SharedCommonStateFlow<T>, SharedCommonMutableStateFlow<T>, SharedKotlinMPPLogger, SharedLetter, SharedBoardEvents, SharedBoardEventsGameStarted, SharedBoardEventsLetterSwiped, SharedBoardEventsOnCanel, SharedBoardEventsOnPause, SharedBoardEventsOnResume, SharedBoardEventsUserSwiped, SharedFalehFeel, SharedBoardState, SharedSoundState, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedOrientation, SharedSoundType, SharedHomeEvents, SharedHomeEventsGetLevel, SharedHomeState, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKbsonBsonValueCompanion, SharedKbsonBsonValue, SharedKbsonBsonBinary, SharedKbsonBsonBoolean, SharedKbsonBsonMaxKey, SharedKbsonBsonMinKey, SharedKbsonBsonNull, SharedKbsonBsonUndefined, SharedKbsonBsonDBPointer, SharedKbsonBsonDateTime, SharedKbsonBsonDecimal128, SharedKbsonBsonDouble, SharedKbsonBsonInt32, SharedKbsonBsonInt64, SharedKbsonBsonJavaScript, SharedKbsonBsonJavaScriptWithScope, SharedKbsonBsonNumber, SharedKbsonBsonRegularExpression, SharedKbsonBsonString, SharedKbsonBsonSymbol, SharedKbsonBsonTimestamp, SharedKbsonBsonType, SharedKbsonBsonObjectIdCompanion, SharedKotlinByteArray, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKbsonBsonBinarySubType, SharedKbsonBsonBinaryCompanion, SharedKbsonBsonBooleanCompanion, SharedKbsonBsonDBPointerCompanion, SharedKbsonBsonDateTimeCompanion, SharedKbsonBsonDecimal128Companion, SharedKbsonBsonDoubleCompanion, SharedKbsonBsonInt32Companion, SharedKbsonBsonInt64Companion, SharedKbsonBsonJavaScriptCompanion, SharedKbsonBsonJavaScriptWithScopeCompanion, SharedKbsonBsonRegularExpressionCompanion, SharedKbsonBsonStringCompanion, SharedKbsonBsonSymbolCompanion, SharedKbsonBsonTimestampCompanion, SharedKotlinByteIterator, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing;

@protocol SharedKotlinx_coroutines_coreFlow, SharedMainRepository, SharedLibrary_baseDeleteable, SharedLibrary_baseBaseRealmObject, SharedLibrary_baseTypedRealmObject, SharedLibrary_baseRealmObject, SharedKotlinx_coroutines_coreFlowCollector, SharedDisposableHandle, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow, SharedKotlinx_coroutines_coreMutableStateFlow, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinComparable, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinIterator, SharedKotlinx_serialization_coreKSerializer, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalDataStore")))
@interface SharedLocalDataStore : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addXpXp:(int32_t)xp completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addXp(xp:completionHandler:)")));
- (NSArray<SharedWordLocal *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)getLevel __attribute__((swift_name("getLevel()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((swift_name("MainRepository")))
@protocol SharedMainRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addXPStars:(int32_t)stars completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addXP(stars:completionHandler:)")));
- (NSArray<SharedWord *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)getUserLevel __attribute__((swift_name("getUserLevel()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainRepositoryImp")))
@interface SharedMainRepositoryImp : SharedBase <SharedMainRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addXPStars:(int32_t)stars completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addXP(stars:completionHandler:)")));
- (NSArray<SharedWord *> *)generateNewWordsNum:(int32_t)num __attribute__((swift_name("generateNewWords(num:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)getUserLevel __attribute__((swift_name("getUserLevel()")));
- (BOOL)isContainedWord:(NSString *)word __attribute__((swift_name("isContained(word:)")));
@end

__attribute__((swift_name("Library_baseDeleteable")))
@protocol SharedLibrary_baseDeleteable
@required
@end

__attribute__((swift_name("Library_baseBaseRealmObject")))
@protocol SharedLibrary_baseBaseRealmObject <SharedLibrary_baseDeleteable>
@required
@end

__attribute__((swift_name("Library_baseTypedRealmObject")))
@protocol SharedLibrary_baseTypedRealmObject <SharedLibrary_baseBaseRealmObject>
@required
@end

__attribute__((swift_name("Library_baseRealmObject")))
@protocol SharedLibrary_baseRealmObject <SharedLibrary_baseTypedRealmObject>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLevelLocal")))
@interface SharedUserLevelLocal : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUserLevelLocalCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *id __attribute__((swift_name("id")));
@property int32_t level __attribute__((swift_name("level")));
@property int32_t xp __attribute__((swift_name("xp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLevelLocal.Companion")))
@interface SharedUserLevelLocalCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserLevelLocalCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLevelMapper")))
@interface SharedUserLevelMapper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userLevelMapper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserLevelMapper *shared __attribute__((swift_name("shared")));
- (SharedUserLevel *)mapLocal:(SharedUserLevelLocal *)local __attribute__((swift_name("map(local:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WordLocal")))
@interface SharedWordLocal : SharedBase
- (instancetype)initWithId:(NSString *)id word:(NSString *)word __attribute__((swift_name("init(id:word:)"))) __attribute__((objc_designated_initializer));
- (SharedWordLocal *)doCopyId:(NSString *)id word:(NSString *)word __attribute__((swift_name("doCopy(id:word:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WordMapper")))
@interface SharedWordMapper : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)wordMapper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWordMapper *shared __attribute__((swift_name("shared")));
- (SharedWord *)mapLocal:(SharedWordLocal *)local __attribute__((swift_name("map(local:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("CommonFlow")))
@interface SharedCommonFlow<T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SharedDisposableHandle>)subscribeOnCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(onCollect:)")));
- (id<SharedDisposableHandle>)subscribeCoroutineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)coroutineScope dispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher onCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(coroutineScope:dispatcher:onCollect:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("CommonStateFlow")))
@interface SharedCommonStateFlow<T> : SharedCommonFlow<T> <SharedKotlinx_coroutines_coreStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SharedKotlinx_coroutines_coreMutableSharedFlow <SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((swift_name("CommonMutableStateFlow")))
@interface SharedCommonMutableStateFlow<T> : SharedCommonStateFlow<T> <SharedKotlinx_coroutines_coreMutableStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol SharedDisposableHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSMutableStateFlow")))
@interface SharedIOSMutableStateFlow<T> : SharedCommonMutableStateFlow<T>
- (instancetype)initWithInitialValue:(T _Nullable)initialValue __attribute__((swift_name("init(initialValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMPPLogger")))
@interface SharedKotlinMPPLogger : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kotlinMPPLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinMPPLogger *shared __attribute__((swift_name("shared")));
- (void)debugBuild __attribute__((swift_name("debugBuild()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timer")))
@interface SharedTimer : SharedBase
- (instancetype)initWithTime:(int64_t)time onTick:(void (^)(void))onTick __attribute__((swift_name("init(time:onTick:)"))) __attribute__((objc_designated_initializer));
- (void)cancelTimer __attribute__((swift_name("cancelTimer()")));
- (void)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) void (^onTick)(void) __attribute__((swift_name("onTick")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardBuilder")))
@interface SharedBoardBuilder : SharedBase
- (instancetype)initWithRows:(int32_t)rows columns:(int32_t)columns __attribute__((swift_name("init(rows:columns:)"))) __attribute__((objc_designated_initializer));
- (void)buildWordsList:(NSMutableArray<SharedWord *> *)wordsList __attribute__((swift_name("build(wordsList:)")));
- (NSMutableArray<NSMutableArray<SharedLetter *> *> *)getBoard __attribute__((swift_name("getBoard()")));
@end

__attribute__((swift_name("BoardEvents")))
@interface SharedBoardEvents : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.GameStarted")))
@interface SharedBoardEventsGameStarted : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gameStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsGameStarted *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.LetterSwiped")))
@interface SharedBoardEventsLetterSwiped : SharedBoardEvents
- (instancetype)initWithPositions:(NSArray<SharedInt *> *)positions __attribute__((swift_name("init(positions:)"))) __attribute__((objc_designated_initializer));
- (SharedBoardEventsLetterSwiped *)doCopyPositions:(NSArray<SharedInt *> *)positions __attribute__((swift_name("doCopy(positions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedInt *> *positions __attribute__((swift_name("positions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnCanel")))
@interface SharedBoardEventsOnCanel : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCanel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnCanel *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnPause")))
@interface SharedBoardEventsOnPause : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPause __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnPause *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.OnResume")))
@interface SharedBoardEventsOnResume : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onResume __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsOnResume *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardEvents.UserSwiped")))
@interface SharedBoardEventsUserSwiped : SharedBoardEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userSwiped __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBoardEventsUserSwiped *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardState")))
@interface SharedBoardState : SharedBase
- (instancetype)initWithGrid:(NSArray<NSArray<SharedLetter *> *> *)grid percent:(float)percent time:(NSString *)time points:(int32_t)points isNavigate:(BOOL)isNavigate stars:(int32_t)stars remainingAnswers:(NSArray<NSString *> *)remainingAnswers id:(NSString *)id falehFeel:(SharedFalehFeel *)falehFeel __attribute__((swift_name("init(grid:percent:time:points:isNavigate:stars:remainingAnswers:id:falehFeel:)"))) __attribute__((objc_designated_initializer));
- (SharedBoardState *)doCopyGrid:(NSArray<NSArray<SharedLetter *> *> *)grid percent:(float)percent time:(NSString *)time points:(int32_t)points isNavigate:(BOOL)isNavigate stars:(int32_t)stars remainingAnswers:(NSArray<NSString *> *)remainingAnswers id:(NSString *)id falehFeel:(SharedFalehFeel *)falehFeel __attribute__((swift_name("doCopy(grid:percent:time:points:isNavigate:stars:remainingAnswers:id:falehFeel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedFalehFeel *falehFeel __attribute__((swift_name("falehFeel")));
@property (readonly) NSArray<NSArray<SharedLetter *> *> *grid __attribute__((swift_name("grid")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property BOOL isNavigate __attribute__((swift_name("isNavigate")));
@property (readonly) float percent __attribute__((swift_name("percent")));
@property int32_t points __attribute__((swift_name("points")));
@property NSArray<NSString *> *remainingAnswers __attribute__((swift_name("remainingAnswers")));
@property int32_t stars __attribute__((swift_name("stars")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoardViewModel")))
@interface SharedBoardViewModel : SharedBase
- (instancetype)initWithCoroutineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope> _Nullable)coroutineScope __attribute__((swift_name("init(coroutineScope:)"))) __attribute__((objc_designated_initializer));
- (void)onEventEvent:(SharedBoardEvents *)event __attribute__((swift_name("onEvent(event:)")));
@property (readonly) SharedCommonStateFlow<SharedSoundState *> *soundState __attribute__((swift_name("soundState")));
@property (readonly) SharedCommonStateFlow<SharedBoardState *> *state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FalehFeel")))
@interface SharedFalehFeel : SharedKotlinEnum<SharedFalehFeel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedFalehFeel *idle __attribute__((swift_name("idle")));
@property (class, readonly) SharedFalehFeel *sleep __attribute__((swift_name("sleep")));
@property (class, readonly) SharedFalehFeel *correct __attribute__((swift_name("correct")));
+ (SharedKotlinArray<SharedFalehFeel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedFalehFeel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Orientation")))
@interface SharedOrientation : SharedKotlinEnum<SharedOrientation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOrientation *vertical __attribute__((swift_name("vertical")));
@property (class, readonly) SharedOrientation *horizontal __attribute__((swift_name("horizontal")));
+ (SharedKotlinArray<SharedOrientation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOrientation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundState")))
@interface SharedSoundState : SharedBase
- (instancetype)initWithId:(NSString *)id soundState:(SharedSoundType *)soundState __attribute__((swift_name("init(id:soundState:)"))) __attribute__((objc_designated_initializer));
- (SharedSoundState *)doCopyId:(NSString *)id soundState:(SharedSoundType *)soundState __attribute__((swift_name("doCopy(id:soundState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property SharedSoundType *soundState __attribute__((swift_name("soundState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundType")))
@interface SharedSoundType : SharedKotlinEnum<SharedSoundType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSoundType *started __attribute__((swift_name("started")));
@property (class, readonly) SharedSoundType *correctSwipe __attribute__((swift_name("correctSwipe")));
@property (class, readonly) SharedSoundType *wrongSwipe __attribute__((swift_name("wrongSwipe")));
@property (class, readonly) SharedSoundType *halfTime __attribute__((swift_name("halfTime")));
@property (class, readonly) SharedSoundType *idle __attribute__((swift_name("idle")));
+ (SharedKotlinArray<SharedSoundType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSoundType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("HomeEvents")))
@interface SharedHomeEvents : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeEvents.GetLevel")))
@interface SharedHomeEventsGetLevel : SharedHomeEvents
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getLevel __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedHomeEventsGetLevel *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeState")))
@interface SharedHomeState : SharedBase
- (instancetype)initWithId:(NSString *)id userLevel:(SharedUserLevel *)userLevel __attribute__((swift_name("init(id:userLevel:)"))) __attribute__((objc_designated_initializer));
- (SharedHomeState *)doCopyId:(NSString *)id userLevel:(SharedUserLevel *)userLevel __attribute__((swift_name("doCopy(id:userLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedUserLevel *userLevel __attribute__((swift_name("userLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModel")))
@interface SharedHomeViewModel : SharedBase
- (instancetype)initWithCourotineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope> _Nullable)courotineScope __attribute__((swift_name("init(courotineScope:)"))) __attribute__((objc_designated_initializer));
- (void)onEventEvents:(SharedHomeEvents *)events __attribute__((swift_name("onEvent(events:)")));
@property (readonly) SharedCommonStateFlow<SharedHomeState *> *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Letter")))
@interface SharedLetter : SharedBase
- (instancetype)initWithId:(NSString *)id letter:(NSString *)letter isSwiped:(BOOL)isSwiped isSelected:(BOOL)isSelected isWrong:(BOOL)isWrong __attribute__((swift_name("init(id:letter:isSwiped:isSelected:isWrong:)"))) __attribute__((objc_designated_initializer));
- (SharedLetter *)doCopyId:(NSString *)id letter:(NSString *)letter isSwiped:(BOOL)isSwiped isSelected:(BOOL)isSelected isWrong:(BOOL)isWrong __attribute__((swift_name("doCopy(id:letter:isSwiped:isSelected:isWrong:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property BOOL isSelected __attribute__((swift_name("isSelected")));
@property BOOL isSwiped __attribute__((swift_name("isSwiped")));
@property BOOL isWrong __attribute__((swift_name("isWrong")));
@property NSString *letter __attribute__((swift_name("letter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLevel")))
@interface SharedUserLevel : SharedBase
- (instancetype)initWithLevel:(int32_t)level xp:(float)xp __attribute__((swift_name("init(level:xp:)"))) __attribute__((objc_designated_initializer));
- (SharedUserLevel *)doCopyLevel:(int32_t)level xp:(float)xp __attribute__((swift_name("doCopy(level:xp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t level __attribute__((swift_name("level")));
@property (readonly) float xp __attribute__((swift_name("xp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Word")))
@interface SharedWord : SharedBase
- (instancetype)initWithId:(NSString *)id word:(NSString *)word __attribute__((swift_name("init(id:word:)"))) __attribute__((objc_designated_initializer));
- (SharedWord *)doCopyId:(NSString *)id word:(NSString *)word __attribute__((swift_name("doCopy(id:word:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateSetKt")))
@interface SharedDateSetKt : SharedBase
@property (class, readonly) NSArray<NSString *> *fourLetterArabicWords __attribute__((swift_name("fourLetterArabicWords")));
@property (class, readonly) SharedKotlinArray<NSString *> *threeLetterArabicWords __attribute__((swift_name("threeLetterArabicWords")));
@property (class, readonly) NSArray<NSString *> *twoLetterArabicWords __attribute__((swift_name("twoLetterArabicWords")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlowKt")))
@interface SharedCommonFlowKt : SharedBase
+ (SharedCommonFlow<id> *)toCommonFlow:(id<SharedKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("toCommonFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonMutableStateFlowKt")))
@interface SharedCommonMutableStateFlowKt : SharedBase
+ (SharedCommonMutableStateFlow<id> *)toCommonMutableStateFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)receiver __attribute__((swift_name("toCommonMutableStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonStateFlowKt")))
@interface SharedCommonStateFlowKt : SharedBase
+ (SharedCommonStateFlow<id> *)toCommonStateFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)receiver __attribute__((swift_name("toCommonStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonUUIDKt")))
@interface SharedCommonUUIDKt : SharedBase
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilKt")))
@interface SharedUtilKt : SharedBase
+ (NSString *)formatMillisecondsToMinutesMilliseconds:(int64_t)milliseconds __attribute__((swift_name("formatMillisecondsToMinutes(milliseconds:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KbsonBsonValue")))
@interface SharedKbsonBsonValue : SharedBase
@property (class, readonly, getter=companion) SharedKbsonBsonValueCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedKbsonBsonValue *> *)asArray __attribute__((swift_name("asArray()")));
- (SharedKbsonBsonBinary *)asBinary __attribute__((swift_name("asBinary()")));
- (SharedKbsonBsonBoolean *)asBoolean __attribute__((swift_name("asBoolean()")));
- (SharedKbsonBsonMaxKey *)asBsonMaxKey __attribute__((swift_name("asBsonMaxKey()")));
- (SharedKbsonBsonMinKey *)asBsonMinKey __attribute__((swift_name("asBsonMinKey()")));
- (SharedKbsonBsonNull *)asBsonNull __attribute__((swift_name("asBsonNull()")));
- (SharedKbsonBsonUndefined *)asBsonUndefined __attribute__((swift_name("asBsonUndefined()")));
- (SharedKbsonBsonDBPointer *)asDBPointer __attribute__((swift_name("asDBPointer()")));
- (SharedKbsonBsonDateTime *)asDateTime __attribute__((swift_name("asDateTime()")));
- (SharedKbsonBsonDecimal128 *)asDecimal128 __attribute__((swift_name("asDecimal128()")));
- (SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)asDocument __attribute__((swift_name("asDocument()")));
- (SharedKbsonBsonDouble *)asDouble __attribute__((swift_name("asDouble()")));
- (SharedKbsonBsonInt32 *)asInt32 __attribute__((swift_name("asInt32()")));
- (SharedKbsonBsonInt64 *)asInt64 __attribute__((swift_name("asInt64()")));
- (SharedKbsonBsonJavaScript *)asJavaScript __attribute__((swift_name("asJavaScript()")));
- (SharedKbsonBsonJavaScriptWithScope *)asJavaScriptWithScope __attribute__((swift_name("asJavaScriptWithScope()")));
- (SharedKbsonBsonNumber *)asNumber __attribute__((swift_name("asNumber()")));
- (SharedKbsonBsonObjectId *)asObjectId __attribute__((swift_name("asObjectId()")));
- (SharedKbsonBsonRegularExpression *)asRegularExpression __attribute__((swift_name("asRegularExpression()")));
- (SharedKbsonBsonString *)asString __attribute__((swift_name("asString()")));
- (SharedKbsonBsonSymbol *)asSymbol __attribute__((swift_name("asSymbol()")));
- (SharedKbsonBsonTimestamp *)asTimestamp __attribute__((swift_name("asTimestamp()")));
- (BOOL)isArray __attribute__((swift_name("isArray()")));
- (BOOL)isBinary __attribute__((swift_name("isBinary()")));
- (BOOL)isBoolean __attribute__((swift_name("isBoolean()")));
- (BOOL)isDBPointer __attribute__((swift_name("isDBPointer()")));
- (BOOL)isDateTime __attribute__((swift_name("isDateTime()")));
- (BOOL)isDecimal128 __attribute__((swift_name("isDecimal128()")));
- (BOOL)isDocument __attribute__((swift_name("isDocument()")));
- (BOOL)isDouble __attribute__((swift_name("isDouble()")));
- (BOOL)isInt32 __attribute__((swift_name("isInt32()")));
- (BOOL)isInt64 __attribute__((swift_name("isInt64()")));
- (BOOL)isJavaScript __attribute__((swift_name("isJavaScript()")));
- (BOOL)isJavaScriptWithScope __attribute__((swift_name("isJavaScriptWithScope()")));
- (BOOL)isMaxKey __attribute__((swift_name("isMaxKey()")));
- (BOOL)isMinKey __attribute__((swift_name("isMinKey()")));
- (BOOL)isNull __attribute__((swift_name("isNull()")));
- (BOOL)isNumber __attribute__((swift_name("isNumber()")));
- (BOOL)isObjectId __attribute__((swift_name("isObjectId()")));
- (BOOL)isRegularExpression __attribute__((swift_name("isRegularExpression()")));
- (BOOL)isString __attribute__((swift_name("isString()")));
- (BOOL)isSymbol __attribute__((swift_name("isSymbol()")));
- (BOOL)isTimestamp __attribute__((swift_name("isTimestamp()")));
- (BOOL)isUndefined __attribute__((swift_name("isUndefined()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId")))
@interface SharedKbsonBsonObjectId : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithTimestamp:(int32_t)timestamp randomValue1:(int32_t)randomValue1 randomValue2:(int16_t)randomValue2 counter:(int32_t)counter __attribute__((swift_name("init(timestamp:randomValue1:randomValue2:counter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonObjectIdCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonObjectId *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonValue.Companion")))
@interface SharedKbsonBsonValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonValueCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary")))
@interface SharedKbsonBsonBinary : SharedKbsonBsonValue
- (instancetype)initWithData:(SharedKotlinByteArray *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(int8_t)type data:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(SharedKbsonBsonBinarySubType *)type data_:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBinaryCompanion *companion __attribute__((swift_name("companion")));
- (SharedKbsonBsonBinary *)clone __attribute__((swift_name("clone()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) int8_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean")))
@interface SharedKbsonBsonBoolean : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(BOOL)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBooleanCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonBoolean *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) BOOL value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMaxKey")))
@interface SharedKbsonBsonMaxKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMaxKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMaxKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMinKey")))
@interface SharedKbsonBsonMinKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMinKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMinKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonNull")))
@interface SharedKbsonBsonNull : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonNull *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonNull *VALUE __attribute__((swift_name("VALUE")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonUndefined")))
@interface SharedKbsonBsonUndefined : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonUndefined __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonUndefined *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonUndefined *UNDEFINED __attribute__((swift_name("UNDEFINED")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer")))
@interface SharedKbsonBsonDBPointer : SharedKbsonBsonValue
- (instancetype)initWithNamespace:(NSString *)namespace_ id:(SharedKbsonBsonObjectId *)id __attribute__((swift_name("init(namespace:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDBPointerCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKbsonBsonObjectId *id __attribute__((swift_name("id")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime")))
@interface SharedKbsonBsonDateTime : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128")))
@interface SharedKbsonBsonDecimal128 : SharedKbsonBsonValue
@property (class, readonly, getter=companion) SharedKbsonBsonDecimal128Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) uint64_t high __attribute__((swift_name("high")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));
@property (readonly) BOOL isNaN __attribute__((swift_name("isNaN")));
@property (readonly) BOOL isNegative __attribute__((swift_name("isNegative")));
@property (readonly) uint64_t low __attribute__((swift_name("low")));
@end

__attribute__((swift_name("KbsonBsonNumber")))
@interface SharedKbsonBsonNumber : SharedKbsonBsonValue
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer));
- (double)doubleValue __attribute__((swift_name("doubleValue()")));
- (int32_t)intValue __attribute__((swift_name("intValue()")));
- (int64_t)longValue __attribute__((swift_name("longValue()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble")))
@interface SharedKbsonBsonDouble : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(double)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonDoubleCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDouble *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32")))
@interface SharedKbsonBsonInt32 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt32Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt32 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64")))
@interface SharedKbsonBsonInt64 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt64Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt64 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript")))
@interface SharedKbsonBsonJavaScript : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope")))
@interface SharedKbsonBsonJavaScriptWithScope : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code scope:(SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)scope __attribute__((swift_name("init(code:scope:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptWithScopeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression")))
@interface SharedKbsonBsonRegularExpression : SharedKbsonBsonValue
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSString *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonRegularExpressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString")))
@interface SharedKbsonBsonString : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonStringCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonString *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol")))
@interface SharedKbsonBsonSymbol : SharedKbsonBsonValue
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonSymbolCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp")))
@interface SharedKbsonBsonTimestamp : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeconds:(int32_t)seconds increment:(int32_t)increment __attribute__((swift_name("init(seconds:increment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonTimestampCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonTimestamp *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t inc __attribute__((swift_name("inc")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonType")))
@interface SharedKbsonBsonType : SharedKotlinEnum<SharedKbsonBsonType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonType *endOfDocument __attribute__((swift_name("endOfDocument")));
@property (class, readonly) SharedKbsonBsonType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedKbsonBsonType *string __attribute__((swift_name("string")));
@property (class, readonly) SharedKbsonBsonType *document __attribute__((swift_name("document")));
@property (class, readonly) SharedKbsonBsonType *array __attribute__((swift_name("array")));
@property (class, readonly) SharedKbsonBsonType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonType *undefined __attribute__((swift_name("undefined")));
@property (class, readonly) SharedKbsonBsonType *objectId __attribute__((swift_name("objectId")));
@property (class, readonly) SharedKbsonBsonType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SharedKbsonBsonType *dateTime __attribute__((swift_name("dateTime")));
@property (class, readonly) SharedKbsonBsonType *null __attribute__((swift_name("null")));
@property (class, readonly) SharedKbsonBsonType *regularExpression __attribute__((swift_name("regularExpression")));
@property (class, readonly) SharedKbsonBsonType *dbPointer __attribute__((swift_name("dbPointer")));
@property (class, readonly) SharedKbsonBsonType *javascript __attribute__((swift_name("javascript")));
@property (class, readonly) SharedKbsonBsonType *symbol __attribute__((swift_name("symbol")));
@property (class, readonly) SharedKbsonBsonType *javascriptWithScope __attribute__((swift_name("javascriptWithScope")));
@property (class, readonly) SharedKbsonBsonType *int32 __attribute__((swift_name("int32")));
@property (class, readonly) SharedKbsonBsonType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) SharedKbsonBsonType *int64 __attribute__((swift_name("int64")));
@property (class, readonly) SharedKbsonBsonType *decimal128 __attribute__((swift_name("decimal128")));
@property (class, readonly) SharedKbsonBsonType *minKey __attribute__((swift_name("minKey")));
@property (class, readonly) SharedKbsonBsonType *maxKey __attribute__((swift_name("maxKey")));
+ (SharedKotlinArray<SharedKbsonBsonType *> *)values __attribute__((swift_name("values()")));
- (BOOL)isContainer __attribute__((swift_name("isContainer()")));
@property (readonly) uint8_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId.Companion")))
@interface SharedKbsonBsonObjectIdCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonObjectIdCompanion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonObjectId *)invoke __attribute__((swift_name("invoke()")));
- (SharedKbsonBsonObjectId *)invokeByteArray:(SharedKotlinByteArray *)byteArray __attribute__((swift_name("invoke(byteArray:)")));
- (SharedKbsonBsonObjectId *)invokeTimestamp:(int64_t)timestamp __attribute__((swift_name("invoke(timestamp:)")));
- (SharedKbsonBsonObjectId *)invokeHexString:(NSString *)hexString __attribute__((swift_name("invoke(hexString:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinarySubType")))
@interface SharedKbsonBsonBinarySubType : SharedKotlinEnum<SharedKbsonBsonBinarySubType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonBinarySubType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *function __attribute__((swift_name("function")));
@property (class, readonly) SharedKbsonBsonBinarySubType *oldBinary __attribute__((swift_name("oldBinary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidLegacy __attribute__((swift_name("uuidLegacy")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidStandard __attribute__((swift_name("uuidStandard")));
@property (class, readonly) SharedKbsonBsonBinarySubType *md5 __attribute__((swift_name("md5")));
@property (class, readonly) SharedKbsonBsonBinarySubType *encrypted __attribute__((swift_name("encrypted")));
@property (class, readonly) SharedKbsonBsonBinarySubType *column __attribute__((swift_name("column")));
@property (class, readonly) SharedKbsonBsonBinarySubType *userDefined __attribute__((swift_name("userDefined")));
+ (SharedKotlinArray<SharedKbsonBsonBinarySubType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int8_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary.Companion")))
@interface SharedKbsonBsonBinaryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBinaryCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean.Companion")))
@interface SharedKbsonBsonBooleanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBooleanCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKbsonBsonBoolean *)valueOfValue:(BOOL)value __attribute__((swift_name("valueOf(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *FALSE_VALUE __attribute__((swift_name("FALSE_VALUE")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *TRUE_VALUE __attribute__((swift_name("TRUE_VALUE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer.Companion")))
@interface SharedKbsonBsonDBPointerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDBPointerCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime.Companion")))
@interface SharedKbsonBsonDateTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128.Companion")))
@interface SharedKbsonBsonDecimal128Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDecimal128Companion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonDecimal128 *)fromIEEE754BIDEncodingHigh:(uint64_t)high low:(uint64_t)low __attribute__((swift_name("fromIEEE754BIDEncoding(high:low:)")));
- (SharedKbsonBsonDecimal128 *)invokeValue:(NSString *)value __attribute__((swift_name("invoke(value:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_NaN __attribute__((swift_name("NEGATIVE_NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_ZERO __attribute__((swift_name("NEGATIVE_ZERO")));
@property (readonly) SharedKbsonBsonDecimal128 *NaN __attribute__((swift_name("NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_ZERO __attribute__((swift_name("POSITIVE_ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble.Companion")))
@interface SharedKbsonBsonDoubleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDoubleCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32.Companion")))
@interface SharedKbsonBsonInt32Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt32Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64.Companion")))
@interface SharedKbsonBsonInt64Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt64Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript.Companion")))
@interface SharedKbsonBsonJavaScriptCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope.Companion")))
@interface SharedKbsonBsonJavaScriptWithScopeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptWithScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression.Companion")))
@interface SharedKbsonBsonRegularExpressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonRegularExpressionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString.Companion")))
@interface SharedKbsonBsonStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonStringCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol.Companion")))
@interface SharedKbsonBsonSymbolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonSymbolCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp.Companion")))
@interface SharedKbsonBsonTimestampCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonTimestampCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
