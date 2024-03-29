#ifndef TKDetector_h__
#define TKDetector_h__
// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 TK_DT_DLL_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// TK_DT_DLL_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。

#ifdef TK_DT_DLL_EXPORTS
#define TK_DT_DLL_API __declspec(dllexport)
#else
#define TK_DT_DLL_API __declspec(dllimport)
#endif

class TK_DT_DLL_API CTkDetector
{
public:
	CTkDetector();
	~CTkDetector();

public:
	int add(int a, int b);
	int subtract(int a, int b);
};

#endif // TKDetector_h__