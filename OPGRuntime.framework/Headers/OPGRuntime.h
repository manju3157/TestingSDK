//
//  OPGRuntime.h
//  OPGRuntime
//
//  Created by Manjunath on 21/08/17.
//  Copyright © 2017 OnePointGlobal. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for OPGRuntime.
FOUNDATION_EXPORT double OPGRuntimeVersionNumber;

//! Project version string for OPGRuntime.
FOUNDATION_EXPORT const unsigned char OPGRuntimeVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <OPGRuntime/PublicHeader.h>
//#import <OPGRuntime/Access.h>
//#import <OPGRuntime/AccessFlags.h>
//#import <OPGRuntime/Alias.h>
//#import <OPGRuntime/AliasGenerator.h>
//#import <OPGRuntime/AliasMap.h>
//#import <OPGRuntime/Alignments.h>
//#import <OPGRuntime/AppConfig.h>
//#import <OPGRuntime/ARCHelper.h>
//#import <OPGRuntime/ArrayTypeConstants.h>
//#import <OPGRuntime/AskTypeConstants.h>
//#import <OPGRuntime/AstBinaryExpression.h>
//#import <OPGRuntime/AstConstant.h>
//#import <OPGRuntime/AstIdentifier.h>
//#import <OPGRuntime/AstNode.h>
//#import <OPGRuntime/Attribute.h>
//#import <OPGRuntime/AttributeRecord.h>
////#import <OPGRuntime/attributes.h>
//#import <OPGRuntime/AudioControlPositions.h>
//#import <OPGRuntime/AudioStyle.h>
//
//#import <OPGRuntime/Banner.h>
//#import <OPGRuntime/Banners.h>
//#import <OPGRuntime/BaseRecord.h>
//#import <OPGRuntime/BasicType.h>
//#import <OPGRuntime/Bootstrapper.h>
//#import <OPGRuntime/BorderStyles.h>
//#import <OPGRuntime/BTBinaryStreamReader.h>
//#import <OPGRuntime/BTBinaryStreamWriter.h>
//#import <OPGRuntime/BTBinaryTools.h>
//#import <OPGRuntime/BTBinaryToolsErrors.h>
//#import <OPGRuntime/Buffer.h>
//#import <OPGRuntime/Builder.h>
//
//#import <OPGRuntime/Cache.h>
//#import <OPGRuntime/CacheManager.h>
//#import <OPGRuntime/CallStackItem.h>
//#import <OPGRuntime/Categories.h>
//#import <OPGRuntime/CategoryAttributes.h>
//#import <OPGRuntime/CategoryFilterConstants.h>
//#import <OPGRuntime/CategoryFlagConstants.h>
//#import <OPGRuntime/CategoryRecord.h>
//#import <OPGRuntime/CategoryStyle.h>
//#import <OPGRuntime/CategoryStyles.h>
//#import <OPGRuntime/CategoryStyleTypes.h>
//#import <OPGRuntime/CategoryTypes.h>
//#import <OPGRuntime/CellStyle.h>
//#import <OPGRuntime/ClassHelper.h>
//#import <OPGRuntime/CodeAttribute.h>
//#import <OPGRuntime/CollectionObject.h>
//#import <OPGRuntime/config.h>
//#import <OPGRuntime/Constant.h>
//#import <OPGRuntime/ConstantDouble.h>
//#import <OPGRuntime/ConstantField.h>
//#import <OPGRuntime/ConstantFloat.h>
//#import <OPGRuntime/ConstantInteger.h>
//#import <OPGRuntime/ConstantLong.h>
//#import <OPGRuntime/ConstantNameAndType.h>
//#import <OPGRuntime/ConstantNameRef.h>
//#import <OPGRuntime/ConstantPoolRecord.h>
//#import <OPGRuntime/ConstantUtf8.h>
//#import <OPGRuntime/ConstantValueAttribute.h>
//#import <OPGRuntime/Container.h>
//#import <OPGRuntime/ContextUsageConstants.h>
//#import <OPGRuntime/Control.h>
//#import <OPGRuntime/ControlDefinitions.h>
//#import <OPGRuntime/Controller.h>
//#import <OPGRuntime/Controls.h>
//#import <OPGRuntime/ControlStyle.h>
//#import <OPGRuntime/ControlTypes.h>
////#import <OPGRuntime/crc32.h>
//#import <OPGRuntime/crypt.h>
//#import <OPGRuntime/CursorTypes.h>
//
//#import <OPGRuntime/Data.h>
//#import <OPGRuntime/DataEncryption.h>
//#import <OPGRuntime/DataTypeConstants.h>
//#import <OPGRuntime/DefaultStyles.h>
////#import <OPGRuntime/deflate.h>
//#import <OPGRuntime/Descriptor.h>
//#import <OPGRuntime/Dim.h>
//#import <OPGRuntime/DocType.h>
//#import <OPGRuntime/documents.h>
//
//#import <OPGRuntime/ElementAlignments.h>
//#import <OPGRuntime/ElementTypeConstants.h>
//#import <OPGRuntime/Empty.h>
//#import <OPGRuntime/ErrorArgs.h>
//#import <OPGRuntime/ErrorHandler.h>
//#import <OPGRuntime/ErrorInfo.h>
//#import <OPGRuntime/ErrorList.h>
//#import <OPGRuntime/Errors.h>
//#import <OPGRuntime/ErrorType.h>
//#import <OPGRuntime/EventType.h>
//#import <OPGRuntime/ExceptionsAttribute.h>
//#import <OPGRuntime/ExceptionTable.h>
//#import <OPGRuntime/Execute.h>
//#import <OPGRuntime/Executor.h>
//#import <OPGRuntime/ExObjectTypeConstants.h>
//#import <OPGRuntime/extensions.h>
//#import <OPGRuntime/extra.h>
//
//#import <OPGRuntime/FastStack.h>
//#import <OPGRuntime/FatalError.h>
//#import <OPGRuntime/Field.h>
//#import <OPGRuntime/FieldRecord.h>
//#import <OPGRuntime/FileInZipInfo.h>
////#import <OPGRuntime/FontEffects.h>
//#import <OPGRuntime/FontStyle.h>
//#import <OPGRuntime/Form.h>
//#import <OPGRuntime/functions.h>
//
//#import <OPGRuntime/GDataXMLNode.h>
//#import <OPGRuntime/GlobalQuestionPositions.h>
//#import <OPGRuntime/GridStyleTypes.h>
//#import <OPGRuntime/gzguts.h>
//
//#import <OPGRuntime/Handler.h>
//#import <OPGRuntime/HtmlControl.h>
//#import <OPGRuntime/HtmlDefinitions.h>
//#import <OPGRuntime/HtmlInput.h>
////#import <OPGRuntime/HtmlPlayer.h>
//#import <OPGRuntime/HttpContext.h>
//
//#import <OPGRuntime/IAlias.h>
//#import <OPGRuntime/IAliasMap.h>
//#import <OPGRuntime/IAnswers.h>
//#import <OPGRuntime/IApplication.h>
//#import <OPGRuntime/IAstNode.h>
//#import <OPGRuntime/IAudioStyle.h>
//#import <OPGRuntime/ICategories.h>
//#import <OPGRuntime/ICategory.h>
//#import <OPGRuntime/ICategoryStyle.h>
//#import <OPGRuntime/ICategoryStyles.h>
//#import <OPGRuntime/ICellStyle.h>
//#import <OPGRuntime/ICollectionObject.h>
//#import <OPGRuntime/IContext.h>
//#import <OPGRuntime/IControl.h>
//#import <OPGRuntime/IControlStyle.h>
//#import <OPGRuntime/IDefaultStyles.h>
//#import <OPGRuntime/IFontStyle.h>
//#import <OPGRuntime/IGenerator.h>
//#import <OPGRuntime/IInterview.h>
//#import <OPGRuntime/IInterviewInfo.h>
//#import <OPGRuntime/IInterviewSampleField.h>
//#import <OPGRuntime/IInterviewSampleRecord.h>
//#import <OPGRuntime/ILabel.h>
//#import <OPGRuntime/ILabelInsert.h>
//#import <OPGRuntime/ILabelInserts.h>
//#import <OPGRuntime/ILabels.h>
//#import <OPGRuntime/ILevel.h>
//#import <OPGRuntime/ImagePositions.h>
//#import <OPGRuntime/IMediaStyle.h>
//#import <OPGRuntime/imports.h>
//#import <OPGRuntime/INavigation.h>
//#import <OPGRuntime/INavigations.h>
//#import <OPGRuntime/INextPage.h>
//#import <OPGRuntime/inffast.h>
////#import <OPGRuntime/inffixed.h>
////#import <OPGRuntime/inflate.h>
//#import <OPGRuntime/inftrees.h>
//#import <OPGRuntime/InnerClass.h>
//#import <OPGRuntime/InnerClassesAttribute.h>
//#import <OPGRuntime/INotes.h>
//#import <OPGRuntime/InstructionSet.h>
//#import <OPGRuntime/InterfaceRecord.h>
//#import <OPGRuntime/Interview.h>
//#import <OPGRuntime/InterviewAction.h>
//#import <OPGRuntime/InterviewInfo.h>
//#import <OPGRuntime/InterviewModes.h>
//#import <OPGRuntime/InterviewModesConstants.h>
//#import <OPGRuntime/InterviewSampleField.h>
//#import <OPGRuntime/InterviewSampleRecord.h>
//#import <OPGRuntime/InterviewSession.h>
//#import <OPGRuntime/InterviewStatus.h>
//#import <OPGRuntime/ioapi.h>
//#import <OPGRuntime/IObjects.h>
//#import <OPGRuntime/IOMIResponse.h>
//#import <OPGRuntime/IOMResponses.h>
//#import <OPGRuntime/IOMScript.h>
//#import <OPGRuntime/IosRuntimeInteractor.h>
//#import <OPGRuntime/IParser.h>
//#import <OPGRuntime/IPlayer.h>
//#import <OPGRuntime/IPlayerResponse.h>
//#import <OPGRuntime/IProperties.h>
//#import <OPGRuntime/IProperty.h>
//#import <OPGRuntime/IQuestion.h>
//#import <OPGRuntime/IQuestionInfo.h>
//#import <OPGRuntime/IQuestions.h>
//#import <OPGRuntime/IQuestionStyle.h>
//#import <OPGRuntime/IQuestionStyles.h>
//#import <OPGRuntime/IRange.h>
//#import <OPGRuntime/IRanges.h>
//#import <OPGRuntime/IReadOnlyCollectionObject.h>
////#import <OPGRuntime/IRecord.h>
//#import <OPGRuntime/IRender.h>
//#import <OPGRuntime/IRequest.h>
//#import <OPGRuntime/IResponse.h>
//#import <OPGRuntime/IResponses.h>
//#import <OPGRuntime/ISavePoint.h>
//#import <OPGRuntime/ISavePoints.h>
//#import <OPGRuntime/IScanner.h>
//#import <OPGRuntime/IScript.h>
//#import <OPGRuntime/IScriptReader.h>
//#import <OPGRuntime/IScriptWriter.h>
//#import <OPGRuntime/ISkeletonCollection.h>
//#import <OPGRuntime/ISliderStyle.h>
//#import <OPGRuntime/IStandardTexts.h>
//#import <OPGRuntime/IStyle.h>
//#import <OPGRuntime/IStyles.h>
//#import <OPGRuntime/ISuperClass.h>
//#import <OPGRuntime/ISymbol.h>
//#import <OPGRuntime/ITemplates.h>
//#import <OPGRuntime/IteratorTypeConstants.h>
//#import <OPGRuntime/IToken.h>
//#import <OPGRuntime/IValidateOption.h>
//#import <OPGRuntime/IValidation.h>
//#import <OPGRuntime/IValue.h>
//#import <OPGRuntime/IValueAttribute.h>
//#import <OPGRuntime/IXmlControl.h>
//#import <OPGRuntime/IXmlInterControl.h>
//
//#import <OPGRuntime/KeyNotFoundException.h>
//#import <OPGRuntime/keys.h>
//
//#import <OPGRuntime/LabelInsert.h>
//#import <OPGRuntime/LabelInserts.h>
//#import <OPGRuntime/Labels.h>
//#import <OPGRuntime/LabelStyleTypes.h>
//#import <OPGRuntime/LanguageConstants.h>
//#import <OPGRuntime/Library.h>
//#import <OPGRuntime/libxslt.h>
//#import <OPGRuntime/LineNumberTable.h>
//#import <OPGRuntime/LineNumberTableAttribute.h>
//#import <OPGRuntime/Literal.h>
//#import <OPGRuntime/Loader.h>
//#import <OPGRuntime/LocalVariableTable.h>
//#import <OPGRuntime/LocalVariableTableAttribute.h>
//#import <OPGRuntime/Long.h>
//
//#import <OPGRuntime/Main.h>
//#import <OPGRuntime/MdmElement.h>
//#import <OPGRuntime/MediaStyle.h>
//#import <OPGRuntime/MediaTypes.h>
//#import <OPGRuntime/MetaDocument.h>
//#import <OPGRuntime/MetaField.h>
//#import <OPGRuntime/MetaProperty.h>
//#import <OPGRuntime/MethodsRecord.h>
//#import <OPGRuntime/Missing.h>
//
//#import <OPGRuntime/namespaces.h>
//#import <OPGRuntime/NavBar.h>
//#import <OPGRuntime/NavButton.h>
//#import <OPGRuntime/NavButtonType.h>
//#import <OPGRuntime/Navigation.h>
//#import <OPGRuntime/Navigations.h>
//#import <OPGRuntime/NavigationTypes.h>
//#import <OPGRuntime/Networker.h>
//#import <OPGRuntime/NextPage.h>
//#import <OPGRuntime/Notation.h>
//#import <OPGRuntime/NSData+AESCrypt.h>
//#import <OPGRuntime/NSData+Base64.h>
//#import <OPGRuntime/NSHTTPURLResponse+Write.h>
//#import <OPGRuntime/NSMutableArray+Error.h>
//#import <OPGRuntime/NSMutableURLRequest+Form.h>
//#import <OPGRuntime/NSString+HTML.h>
//#import <OPGRuntime/NSString+Trim.h>
//#import <OPGRuntime/NullMethod.h>
//#import <OPGRuntime/numbersInternals.h>
//
//#import <OPGRuntime/ObjectEquals.h>
//#import <OPGRuntime/Objects.h>
//#import <OPGRuntime/ObjectToString.h>
//#import <OPGRuntime/ObjectTypesConstants.h>
//#import <OPGRuntime/OffPathDataModes.h>
//#import <OPGRuntime/OnePointClass.h>
//#import <OPGRuntime/OnePointObject.h>
//#import <OPGRuntime/OpDateTime.h>
//#import <OPGRuntime/OpenConstants.h>
//#import <OPGRuntime/Operator.h>
//#import <OPGRuntime/OPGCategory.h>
//#import <OPGRuntime/OPGLabel.h>
//#import <OPGRuntime/OPGMethod.h>
//#import <OPGRuntime/OPGQuestion.h>
////#import <OPGRuntime/OPGRuntime.h>
//#import <OPGRuntime/OPGScanner.h>
//#import <OPGRuntime/OPGStyle.h>
//#import <OPGRuntime/OpIom.h>
//#import <OPGRuntime/OpLibrary.h>
//#import <OPGRuntime/OpMetaData.h>
//#import <OPGRuntime/OpObject.h>
//#import <OPGRuntime/OpQuestion.h>
//#import <OPGRuntime/OpQuestions.h>
//#import <OPGRuntime/OpString.h>
//#import <OPGRuntime/OpVariant.h>
//#import <OPGRuntime/OrderConstants.h>
//#import <OPGRuntime/OrientationConstants.h>
//#import <OPGRuntime/Orientations.h>
//
//#import <OPGRuntime/Page.h>
//#import <OPGRuntime/Parser.h>
//#import <OPGRuntime/pattern.h>
//#import <OPGRuntime/PlayerConstants.h>
//#import <OPGRuntime/PlayerLabel.h>
//#import <OPGRuntime/PlayerScript.h>
//#import <OPGRuntime/preproc.h>
//#import <OPGRuntime/ProgressBar.h>
//#import <OPGRuntime/ProgressDisplay.h>
//#import <OPGRuntime/ProgressOrientation.h>
//#import <OPGRuntime/Properties.h>
//#import <OPGRuntime/Property.h>
//
//#import <OPGRuntime/QueryManager.h>
//#import <OPGRuntime/QuestionBanner.h>
//#import <OPGRuntime/QuestionControl.h>
//#import <OPGRuntime/QuestionEnumerator.h>
//#import <OPGRuntime/QuestionError.h>
//#import <OPGRuntime/QuestionInfo.h>
//#import <OPGRuntime/QuestionLabel.h>
//#import <OPGRuntime/Questions.h>
//#import <OPGRuntime/QuestionStyle.h>
//#import <OPGRuntime/QuestionStyles.h>
//#import <OPGRuntime/QuestionStyleTypes.h>
//#import <OPGRuntime/QuestionTypes.h>
//
//#import <OPGRuntime/Range.h>
//#import <OPGRuntime/Ranges.h>
//#import <OPGRuntime/ReadOnlyCollectionObject.h>
//#import <OPGRuntime/RecordContext.h>
//#import <OPGRuntime/RecordElement.h>
//#import <OPGRuntime/RecordElementType.h>
//#import <OPGRuntime/RecordModes.h>
//#import <OPGRuntime/RecordType.h>
//#import <OPGRuntime/Reference.h>
//#import <OPGRuntime/ReferenceType.h>
//#import <OPGRuntime/Reflector.h>
//#import <OPGRuntime/Response.h>
//#import <OPGRuntime/Results.h>
//#import <OPGRuntime/Routing.h>
//#import <OPGRuntime/RoutingItemsFlags.h>
//#import <OPGRuntime/RoutingScriptOptions.h>
//#import <OPGRuntime/RoutingTypeConstants.h>
//
//#import <OPGRuntime/SavePoint.h>
//#import <OPGRuntime/SavePoints.h>
//#import <OPGRuntime/SavePointTracker.h>
//#import <OPGRuntime/Scanner.h>
//#import <OPGRuntime/ScriptReader.h>
//#import <OPGRuntime/ScriptWriter.h>
//#import <OPGRuntime/security.h>
//#import <OPGRuntime/SessionManager.h>
//#import <OPGRuntime/SignatureAttribute.h>
//#import <OPGRuntime/SkeletonEnumerator.h>
//#import <OPGRuntime/SliderStyle.h>
//#import <OPGRuntime/SliderStyles.h>
//#import <OPGRuntime/SortOrder.h>
//#import <OPGRuntime/SourceFileAttribute.h>
//#import <OPGRuntime/SourceTypeConstants.h>
//#import <OPGRuntime/Stack.h>
//#import <OPGRuntime/StackMapTableAttribute.h>
//#import <OPGRuntime/StandardTexts.h>
//#import <OPGRuntime/StartStates.h>
//#import <OPGRuntime/StaticField.h>
//#import <OPGRuntime/StringFormat.h>
//#import <OPGRuntime/StringResponse.h>
//#import <OPGRuntime/StringUtility.h>
//#import <OPGRuntime/Styles.h>
//#import <OPGRuntime/SubTemplate.h>
//#import <OPGRuntime/SuperClass.h>
//#import <OPGRuntime/Symbol.h>
//#import <OPGRuntime/SymbolBuilder.h>
//#import <OPGRuntime/SymbolTable.h>
//#import <OPGRuntime/SymbolType.h>
//
//#import <OPGRuntime/TemplateManager.h>
//#import <OPGRuntime/templates.h>
//#import <OPGRuntime/TemplateTypes.h>
//#import <OPGRuntime/TerminateStatus.h>
//#import <OPGRuntime/Token.h>
//#import <OPGRuntime/transform.h>
////#import <OPGRuntime/trees.h>
//#import <OPGRuntime/trio.h>
//#import <OPGRuntime/triodef.h>
//
//#import <OPGRuntime/unzip.h>
//#import <OPGRuntime/UTF8Buffer.h>
//
//#import <OPGRuntime/ValidatedActions.h>
//#import <OPGRuntime/ValidateOption.h>
//#import <OPGRuntime/Validation.h>
//#import <OPGRuntime/Value.h>
//#import <OPGRuntime/ValueAttribute.h>
//#import <OPGRuntime/variables.h>
//#import <OPGRuntime/Variant.h>
//#import <OPGRuntime/VarUseConst.h>
//#import <OPGRuntime/VerticalAlignments.h>
//
//#import <OPGRuntime/WebAnswers.h>
//#import <OPGRuntime/WebApplication.h>
//#import <OPGRuntime/WebBrowser.h>
//#import <OPGRuntime/WebContext.h>
//#import <OPGRuntime/WebPlayer.h>
//#import <OPGRuntime/WebRequest.h>
//#import <OPGRuntime/WebResponse.h>
//#import <OPGRuntime/WebSession.h>
////#import <OPGRuntime/win32config.h>
//#import <OPGRuntime/Workspace.h>
//
//#import <OPGRuntime/XmlCategory.h>
//#import <OPGRuntime/XmlControl.h>
//#import <OPGRuntime/XmlControlMapper.h>
//#import <OPGRuntime/XmlControlStyle.h>
//#import <OPGRuntime/XmlInterCategories.h>
//#import <OPGRuntime/XmlInterCategory.h>
//#import <OPGRuntime/XmlInterControl.h>
//#import <OPGRuntime/XmlInterControlStyle.h>
//#import <OPGRuntime/XmlInterLabel.h>
//#import <OPGRuntime/XmlInterLoop.h>
//#import <OPGRuntime/XmlIntermediate.h>
//#import <OPGRuntime/XmlIntermediateLabel.h>
//#import <OPGRuntime/XmlIntermediateNavigation.h>
//#import <OPGRuntime/XmlInterNavigation.h>
//#import <OPGRuntime/XmlInterPage.h>
//#import <OPGRuntime/XmlInterQuestion.h>
//#import <OPGRuntime/XmlInterStyle.h>
//#import <OPGRuntime/XmlLabel.h>
//#import <OPGRuntime/XmlNavigation.h>
//#import <OPGRuntime/XmlPage.h>
//#import <OPGRuntime/XmlQuestion.h>
//#import <OPGRuntime/XmlStyle.h>
//#import <OPGRuntime/XmlTemplateManager.h>
//#import <OPGRuntime/xslt.h>
//#import <OPGRuntime/xsltconfig.h>
//#import <OPGRuntime/xsltexports.h>
//#import <OPGRuntime/xsltInternals.h>
//#import <OPGRuntime/xsltlocale.h>
//#import <OPGRuntime/xsltutils.h>
//#import <OPGRuntime/xsltwin32config.h>
//
//#import <OPGRuntime/zconf.h>
//#import <OPGRuntime/zip.h>
//#import <OPGRuntime/ZipArchive.h>
//#import <OPGRuntime/ZipException.h>
//#import <OPGRuntime/ZipFile.h>
//#import <OPGRuntime/ZipReadStream.h>
//#import <OPGRuntime/ZipWriteStream.h>
//#import <OPGRuntime/zlib.h>
//#import <OPGRuntime/zutil.h>




























