#ifndef TKDetector_h__
#define TKDetector_h__
// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� TK_DT_DLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// TK_DT_DLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�

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